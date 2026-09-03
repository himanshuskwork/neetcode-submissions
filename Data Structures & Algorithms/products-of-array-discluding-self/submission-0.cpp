class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // [1,2,4,6]
        
        // [1,1,2,8]

        // [1,6,24,48]

        // [48,24,12,8]

        vector<int> res(nums.size());
        res[0] = 1;
        int preProduct = 1;

        for(int i=1; i<nums.size(); i++){
            preProduct *=nums[i-1];
            res[i] = preProduct;
        }

        int postProduct = 1;
        for(int j = nums.size()-1 ; j>=0; j--){
            res[j] *= postProduct;
            postProduct *= nums[j];
        }

        return res;

    }
};
