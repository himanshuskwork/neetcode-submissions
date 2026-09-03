class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        int first_i = modifiedBinarySearch(nums, target, true, 0, (nums.size()-1));
        int last_i = modifiedBinarySearch(nums, target, false, 0, (nums.size()-1));

        return {first_i, last_i};
    }

    int modifiedBinarySearch(vector<int>& nums, int target, bool leftBias, int left, int right){
        int l = left;
        int r = right;
        int mid;
        int i = -1;

        while(l<=r){
            mid = l + ((r-l)/2);

            if(target > nums[mid]){
                l = mid + 1;
            }else if(target < nums[mid]){
                r = mid - 1;
            }else{
                i = mid;
                if(leftBias){
                    r = mid - 1;
                }else{
                    l = mid + 1;
                }
            }
            
        }

        return i;
        
    }
};