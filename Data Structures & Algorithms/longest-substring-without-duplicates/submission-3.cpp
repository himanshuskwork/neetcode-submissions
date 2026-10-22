class Solution {
public:
    // int lengthOfLongestSubstring(string s) {
    //     int l = 0;
    //     int r = 0;
    //     int maxLen = 0;
        
    //     unordered_set<char> st;

    //     while(r < s.length()){

    //         if(st.find(s[r]) == st.end()){
    //             st.insert(s[r]);
    //             maxLen = max(maxLen, (r-l+1));
    //             r++;
    //         }else{
    //             st.erase(s[l]);
    //             l++;
    //         }
    //     }
    //     return maxLen;

    // }
    // int lengthOfLongestSubstring(string s) {
    //     int r = 0;
    //     int l = 0;
    //     int resLen = 0;
    //     unordered_set<char> st;

    //     while(r < s.length()){

    //         if(st.find(s[r]) == st.end()){
    //             //insert to hash set
    //             st.insert(s[r]);

    //             //update resLen
    //             resLen = max(resLen, (r - l + 1));

    //             //update r pointer
    //             r++;
    //         }else{
    //             //pop s[l] from hash set
    //             st.erase(s[l]);

    //             //update left pointer
    //             l++;
    //         }
    //     }
    //     return resLen;
    // }
    // int lengthOfLongestSubstring(string s) {
    //     int l = 0;
    //     int r = 0;
    //     unordered_set<char> h_set;

    //     int resLen = 0;

    //     while(r<s.length()){

    //         if(h_set.find(s[r]) == h_set.end()){
    //             h_set.insert(s[r]);
    //             resLen = max(resLen, (r - l + 1));
    //             r++;
    //         }else{
    //             h_set.erase(s[l]);
    //             l++;
    //         }
    //     }
    //     return resLen;
    // }
    int lengthOfLongestSubstring(string s) {
        int l = 0;
        int r = 0;
        int maxLen = 0;

        unordered_set<char> st;

        while(r<s.length()){

            if(st.find(s[r]) == st.end()){
                st.insert(s[r]);

                maxLen = max(maxLen, (r - l + 1));
                r++;
            }
            else{
                st.erase(s[l]);
                l++;
            }
        }
        return maxLen;
    }
};
