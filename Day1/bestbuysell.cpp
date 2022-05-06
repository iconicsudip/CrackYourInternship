class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int j = 0;
        for(int i=1;i<prices.size();i++){
            if(prices[i]<prices[j]){
                j = i ;
            }else{
                profit = max(profit,prices[i]-prices[j]);
            }
        }
        return profit;
    }
};