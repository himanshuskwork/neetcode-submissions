class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l = 0;
        int r = l + 1;
        int maxProfit = 0; 
        int profit = 0;


        while(r < prices.size()){
            profit = prices[r] - prices[l];
            if(profit > 0){
                maxProfit = max(maxProfit, profit);
            }else{
                l = r;
            }
            r++;
        }
        return maxProfit;
    }
};
