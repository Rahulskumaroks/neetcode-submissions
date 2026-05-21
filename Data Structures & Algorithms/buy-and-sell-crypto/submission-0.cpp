class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n  = prices.size();
        int minCoin = INT_MAX;
        int maxProfit = INT_MIN;
        for(int i=0;i<n;i++){
              minCoin = min(minCoin,prices[i]);
              maxProfit = max(maxProfit,prices[i]-minCoin);
        }
        return maxProfit;
    }
};
