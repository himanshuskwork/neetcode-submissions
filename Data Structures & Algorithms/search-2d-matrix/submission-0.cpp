class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int l = 0;
        int m = matrix.size();
        int n = matrix[0].size();
        int matrixLen = m * n ;
        int r = matrixLen - 1;
        int mid;

        while(l<=r){
            mid = l + ((r-l)/2);

            if(matrix[mid/n][mid%n] == target){
                return true;
            }

            if(matrix[mid/n][mid%n] > target){
                r = mid - 1;
            }else{
                l = mid + 1;
            }
        }
        return false;
    }
};
