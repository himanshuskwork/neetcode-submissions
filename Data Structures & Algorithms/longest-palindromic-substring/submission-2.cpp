class Solution {
public:
    // string longestPalindrome(string s) {
        
    //     int resLen = 0;
    //     int resIdx = 0;
    //     for(int i = 0; i<s.length(); i++){

    //         //Odd length Palindrome
    //         int l = i; 
    //         int r = i;

    //         while(l>=0 && r < s.length() && s[l] == s[r]){
                
    //             if((r - l + 1) > resLen){
    //                 resLen = r - l + 1;
    //                 resIdx = l;
    //             }
    //             l--;
    //             r++;
    //         }

    //         //Even length Palindrome
    //         l = i; 
    //         r = i+1;

    //         while(l>=0 && r < s.length() && s[l] == s[r]){
                
    //             if((r - l + 1) > resLen){
    //                 resLen = r - l + 1;
    //                 resIdx = l;
    //             }
    //             l--;
    //             r++;
    //         }
    //     }
    //     return s.substr(resIdx, resLen);
    // }
    string longestPalindrome(string s) {

        int currLen = 0;
        int resLen = 0;
        int resIdx = 0;
        
        for(int i = 0; i<s.length(); i++){

            //Odd palindrome check
            int l = i;
            int r = i;
            
            while(l >= 0 && r < s.length() && s[l] == s[r]){
                currLen = r - l + 1;
                if(currLen > resLen){
                    resLen = currLen;
                    resIdx = l;
                }
                r++;
                l--;
            }


            //Even palindrome check
            l = i;
            r = i + 1;
            
            while(l >= 0 && r < s.length() && s[l] == s[r]){
                currLen = r - l + 1;
                if(currLen > resLen){
                    resLen = currLen;
                    resIdx = l;
                }
                r++;
                l--;
            }

        }
        return s.substr(resIdx, resLen);
    }
};
