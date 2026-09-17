#include <bits/stdc++.h>
using namespace std;
int C_C(vector<int> &coins, int a) {
    vector<int> dp(a + 1, a + 1);
    dp[0] = 0;   
    for (int i = 1; i <= a; i++) {
        for (int c : coins) {
            if (i - c >= 0)
                dp[i] = min(dp[i], dp[i - c] + 1);
        }
    }
    return dp[a] > a ? -1 : dp[a];
}
int main() {
    int n, t;
    cout << "Enter How Many Different Coins You Have: ";
    cin >> n;
    vector<int> c(n);
    cout << "Enter " << n << " Different Coins: ";
    for (int i = 0; i < n; i++)
        cin >> c[i];
    cout << "Enter Target Amount: ";
    cin >> t;
    int res = C_C(c, t);
    if (res == -1)
        cout << "It is not Possible To Get This Number through These Coins";
    else
        cout << "Minimum Coins Required : " << res;
    return 0;
}
