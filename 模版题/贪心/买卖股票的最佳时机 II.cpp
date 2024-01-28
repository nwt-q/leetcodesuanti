class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<int>profit;
        for (int i = 0; i < prices.size() - 1; i++) {
            profit.push_back(prices[i + 1] - prices[i]);
        }
        int cnt = 0;
        for (int i = 0; i < profit.size(); i++) {
            if (profit[i] > 0) cnt += profit[i];
        }
        return cnt;
    }
};

// # 局部最优 推出全局最优

//算出差值,差值即利润
//只要利润不为0,即买入
// https://leetcode.cn/problems/best-time-to-buy-and-sell-stock-ii/
