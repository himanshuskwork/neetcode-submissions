class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l = 0 ;
        int r = heights.size() - 1;
        int res = INT_MIN;

        while(l<r){
            res = max(res, (min(heights[l], heights[r]) * (r-l)));

            if(heights[l] <= heights[r]){
                l += 1;
            }else{
                r -= 1;
            }
        }
        return res;
    }
};
