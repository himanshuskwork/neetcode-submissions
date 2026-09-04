class Solution {
public:
    bool isValid(string s) {
        unordered_map<char, char> mp = {
            {')', '('},
            {'}', '{'},
            {']', '['}
        };

        stack<char> st;
        // bool isOpenParn = false;

        for(int i=0; i<s.length(); i++){
            // isOpenParn = (bool)(s[i] == '(' || s[i] == '{' || s[i] == '[');
            // cout<< isOpenParn;
            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                st.push(s[i]);
            }else{
                if(st.empty()){
                    return false;
                }

                if(st.top() == mp[s[i]]){
                    st.pop();
                }else{
                    return false;
                }

            }
        }

        return st.empty();
        
    }
};
