class Solution {
public:

    // vector<vector<int>> threeSum(vector<int>& nums) {

    //     // sort(nums.begin(), nums.end());

    //     // vector<vector<int>> result;
    //     // int l = 0;
    //     // int r = nums.size() - 1;
    //     // int v;
    //     // int totalSum = 0;

    //     // for(int i=0; i< nums.size()-2; i++){
    //     //     v = nums[i];
    //     //     if(i > 0 && v == nums[i-1]){
    //     //         continue;
    //     //     }

    //     //     l = i+1;
    //     //     r = nums.size() - 1;
    //     //     while(l < r){
    //     //         totalSum = v + nums[l] + nums[r] ; 
    //     //         if(totalSum > 0){
    //     //             r -= 1;
    //     //         }else if(totalSum < 0){
    //     //             l += 1;
    //     //         }else{
    //     //             result.push_back({v, nums[l], nums[r]});
    //     //             l += 1;
    //     //             while(nums[l] == nums[l-1] && l < r){
    //     //                 l += 1;
    //     //             }
    //     //         }
    //     //     }
    //     // }
    //     // return result;
    // }

     vector<vector<int>> threeSum(vector<int>& nums) {

        //sort the list
        sort(nums.begin(), nums.end());

        int totalSum = 0;
        int target = 0;
        int l = 0;
        int r = 0;
        vector<vector<int>> res;

        for(int i=0; i<nums.size()-2; i++){
            if(i > 0 && nums[i] == nums[i-1]){
                continue;
            }

            l = i + 1;
            r = nums.size() - 1;

            while(l<r){
                totalSum = nums[i] + nums[l] + nums[r];

                if(totalSum > target){
                    r--;
                }else if(totalSum < target){
                    l++;
                }else{
                    res.push_back({nums[i], nums[l], nums[r]});
                    l++;

                    while(nums[l] == nums[l-1] && l<r){
                        l++;
                    }

                }
            }
        }
        return res;


    }
};
