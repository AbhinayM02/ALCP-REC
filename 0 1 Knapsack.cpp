#include <bits/stdc++.h>
using namespace std;
int KPS(vector<int> &wei, vector<int> &val, int n, int W) {
    vector<vector<int>> dp(n + 1, vector<int>(W + 1, 0));   
    for (int i = 1; i <= n; i++) {
        for (int w = 0; w <= W; w++) {
            if (wei[i - 1] > w) {
                dp[i][w] = dp[i - 1][w];
            } else {
                dp[i][w] = max(dp[i - 1][w], val[i - 1] + dp[i - 1][w - wei[i - 1]]);
            }
        }
    }
    return dp[n][W];
}
int main() {
    int n;
    cout << "Enter Number Of Items: ";
    cin >> n;
    vector<int> wei(n), val(n);
    cout << "Enter " << n << " item weights: ";
    for (int i = 0; i < n; i++) {
        cin >> wei[i];
    }
    cout << "Enter " << n << " item values: ";
    for (int i = 0; i < n; i++) {
        cin >> val[i];
    }
    int W;
    cout << "Enter Max Weight Of The Knapsack: ";
    cin >> W;
    int maxVal = KPS(wei, val, n, W);
    cout << "Maximum value in Knapsack = " << maxVal << endl;
    return 0;
}
