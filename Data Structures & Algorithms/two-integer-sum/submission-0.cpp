class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int s = nums.size();
        int diff = 0;
        unordered_map<int, int> mp; //value, index

        for(int i = 0; i < s; i++){
            diff = target - nums[i];

            if(mp.find(diff) != mp.end()){
                return {mp[diff], i};
            }
            mp.insert({nums[i], i});
        }
        return {};
    
    }
};
