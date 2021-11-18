//
// Created by 金灵 on 2020/2/22.
//

#include <iostream>
#include <vector>
#include <limits>

using namespace std;

// max profit version 1, find the lowest
int maxProfit(const vector<int>& prices) {
    int now = std::numeric_limits<int>::max();
    int result = 0;

    for (int i = 0; i < prices.size(); ++i) {
        now = std::min(now, prices[i]);
        result = std::max(result, prices[i] - now);
    }

    return result;
}

// max profit version2, by dp
int maxProfit2(vector<int>& prices) {
    vector<vector<int>> dp(prices.size() + 1, vector<int>(2, 0));
    dp[0][1] = -prices[0];
    for (int i = 0; i < prices.size(); ++i) {
        dp[i + 1][0] = max(dp[i][0], dp[i][1] + prices[i]);
        dp[i + 1][1] = max(dp[i][1], dp[i][0] - prices[i]);
    }
    return dp[prices.size()][0];
}

int maxProfit2_greedy(const vector<int>& prices) {
    int result = 0;
    for (int i = 1; i < prices.size(); ++i) {
        result += max(0, prices[i] - prices[i - 1]);
    }
    return result;
}


int main() {
    vector<int> prices{7, 1, 5, 3, 6, 4};
    cout << maxProfit(prices) << endl;

    return 0;
}
