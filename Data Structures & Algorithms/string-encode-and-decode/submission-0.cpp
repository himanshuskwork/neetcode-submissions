class Solution {
public:
    //Encode and Decode Strings
    string encode(vector<string>& strs) {

        string res = "";
        for(const auto& s : strs){
            res += to_string(s.length()) + "#" + s;
        }
        return res;
    }

    vector<string> decode(string s) {
        vector<string> res;

        
        int i = 0;
        int j = 0;
        int length = 0;
        while(i < s.length()){
            j = i;
            while(s[j] != '#'){
                j += 1;
            }
            length = stoi(s.substr(i, (j-i)));

            res.push_back(s.substr(j+1, length));
            i = j + length + 1;
        }
        return res;
    }
};
