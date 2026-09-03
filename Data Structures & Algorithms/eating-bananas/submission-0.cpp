class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1;
        int r = *max_element(piles.begin(), piles.end());
        int k;
        int res = r; 
        long long totalTime;
        int sizeOfPiles = piles.size();

        while(l<=r){
            
            k = l + (r-l)/2;

            totalTime = 0;
            for(int i=0; i < sizeOfPiles; i++){
                // if(i < (sizeOfPiles - 1)){
                    if(piles[i]%k == 0){
                        totalTime += piles[i]/k;
                    }else{
                        totalTime += (piles[i]/k) + 1;
                    }
                // }else{
                //     totalTime += ((double)piles[i]/k);
                // }
            }

            if(totalTime <= h){
                res = min(res, k);
                r = k - 1;
            }else{
                l = k + 1;
            }
        }
        return res;
    }
};
