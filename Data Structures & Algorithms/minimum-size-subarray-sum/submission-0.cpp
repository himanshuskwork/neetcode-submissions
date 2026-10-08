class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l = 0; 
        // int r = 0;
        int len = INT_MAX;
        int total = 0;

        for(int r = 0; r < nums.size(); r++){
            total += nums[r];

            while(total >= target){
                len = min(len, (r-l+1));
                total -= nums[l];
                l++;
            }
            
        }
        return len == INT_MAX ? 0 : len ;
    }
};