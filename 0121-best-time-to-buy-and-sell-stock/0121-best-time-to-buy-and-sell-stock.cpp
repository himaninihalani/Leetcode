class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        if(n<2){
            return 0;
        }
        int maxprofit = 0;
        int minprice=INT_MAX;
        for(int i = 0 ; i<n ;i++){ 
            if(prices[i]<minprice){
                minprice=prices[i];
            }
        int profit= prices[i]- minprice;
            if(profit > maxprofit){
                maxprofit = profit;
            }
        }
        return maxprofit;
    }
};