class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int now_min = prices[0];
        int maxprofit = 0;
        int n = prices.size();
        for (int i=0;i<n;i++){
            now_min = min(now_min,prices[i]);
            int profit = prices[i]-now_min;
            maxprofit = max(maxprofit,profit);
        }
        return maxprofit;
    }
};