class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int, int> count;
        int l = 0;
        int total = 0;
        int res = 0;
        
        for(int r = 0; r<fruits.size(); r++){
            count[fruits[r]]++;
            total++;

            while(count.size() > 2){
                count[fruits[l]]--;
                total--;

                if(count[fruits[l]]==0){
                    count.erase(fruits[l]);
                }
                l++;
            }
            res = max(res, (r-l+1));
        }
        return res;
    }
};