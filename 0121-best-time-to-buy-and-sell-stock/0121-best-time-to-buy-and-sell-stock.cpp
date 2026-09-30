class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int i = 1, min_=prices[0], max_profit=0;
       int n = prices.size();
       if(n == 1)
        return 0;
       while(i < n){
        int profit = prices[i] - min_;
        max_profit = max(profit, max_profit);
        min_ = min(min_, prices[i]); 
        i++;
       }
       return max_profit;
    }
};