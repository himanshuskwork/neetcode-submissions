class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        sort(nums.begin(), nums.end());

        vector<vector<int>> result;
        int l = 0;
        int r = nums.size() - 1;
        int v;
        int totalSum = 0;

        for(int i=0; i< nums.size()-2; i++){
            v = nums[i];
            if(i > 0 && v == nums[i-1]){
                continue;
            }

            l = i+1;
            r = nums.size() - 1;
            while(l < r){
                totalSum = v + nums[l] + nums[r] ; 
                if(totalSum > 0){
                    r -= 1;
                }else if(totalSum < 0){
                    l += 1;
                }else{
                    result.push_back({v, nums[l], nums[r]});
                    l += 1;
                    while(nums[l] == nums[l-1] && l < r){
                        l += 1;
                    }
                }
            }
        }
        return result;
    }
};
