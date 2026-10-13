class Solution {
public:
    // bool isValid(string s) {
    //     unordered_map<char, char> mp = {
    //         {')', '('},
    //         {'}', '{'},
    //         {']', '['}
    //     };

    //     stack<char> st;
    //     // bool isOpenParn = false;

    //     for(int i=0; i<s.length(); i++){
    //         // isOpenParn = (bool)(s[i] == '(' || s[i] == '{' || s[i] == '[');
    //         // cout<< isOpenParn;
    //         if(s[i] == '(' || s[i] == '{' || s[i] == '['){
    //             st.push(s[i]);
    //         }else{
    //             if(st.empty()){
    //                 return false;
    //             }

    //             if(st.top() == mp[s[i]]){
    //                 st.pop();
    //             }else{
    //                 return false;
    //             }

    //         }
    //     }

    //     return st.empty();
        
    // }

    bool isValid(string s) {

        unordered_map<char, char> mp;
        mp = {
            {'(', ')'},
            {'{', '}'},
            {'[', ']'}
        };

        stack<char> stk;

        for(int i = 0; i < s.length(); i++){

            //if s[i] is a key,
                //push
            if(mp.contains(s[i])){
                stk.push(s[i]);
            }
            else{
                if(stk.empty()){
                    return false;
                }

                if(s[i] == mp[stk.top()]){
                    stk.pop();
                }else{
                    return false;
                }
            }

            //else
                //if stack is empty return false
                //pop from stack -> if mp[stk.top()] == s[i] else return false;

        }
        return stk.empty();
        
    }
};
