class Solution {
public:
    int characterReplacement(string s, int k) {
       
        unordered_map<char, int> freq_mp;
        int l = 0;
        int res = 0;
        int maxFreq = INT_MIN;

        for(int r = 0; r<s.length(); r++){
            freq_mp[s[r]]++;
            maxFreq = max(maxFreq, freq_mp[s[r]]);

            //check if the window is not valid increment l
            while((r-l+1) - maxFreq > k){
                freq_mp[s[l]]--;
                l++;
            }
            res = max(res, (r-l+1));
        }

        return res;

    }
};
