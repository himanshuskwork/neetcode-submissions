class Solution {
public:
    int findMin(vector<int> &nums) {
        int l = 0 ;
        int r = nums.size() - 1;
        int m;
        int res = INT_MAX;

        if(nums[l]<nums[r]){
            return nums[l];
        }

        while(l<=r){
            m = l + ((r-l)/2);
            res = min(res, nums[m]);
            if(nums[m] >= nums[l] && nums[m] > nums[r]){
                l = m + 1;
            }else{
                r = m - 1;
            }
        }
        return res;
    }
};
