class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i=0;
        int j=1;
        int maxprof = 0;
        while(j<prices.size()){
            if(prices[i]>prices[j]){
                i++;
                j++;
            }else{
                maxprof += prices[j]-prices[i];
                i++;
                j++;
            }
        }
        return maxprof;
    }
};