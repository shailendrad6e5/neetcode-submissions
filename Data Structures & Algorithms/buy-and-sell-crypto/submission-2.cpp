class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int buy = prices[0];
        int maxprofit = 0;
        for(auto i : prices){
            buy = min(buy, i);
            maxprofit = max(maxprofit, i - buy);
        }
        return maxprofit;
    }
};
