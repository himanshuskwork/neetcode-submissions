class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> s_map;
        unordered_map<char, int> t_map;

        int s_len = s.length();
        int t_len = t.length();

        if(s_len != t_len){
            return false;
        }

        //popualte hashmaps
        for(int i = 0; i < s_len; i++){
            s_map[s[i]]++;
            t_map[t[i]]++;
        }

        for(int j = 0; j < s_len; j++){
            if(s_map[s[j]] != t_map[s[j]]){
                return false;
            }
        }
        return true;
    }
};
