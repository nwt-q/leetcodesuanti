#include<bits/stdc++.h>
#define Run 0
#define endl "\n"
using ll = long long;
using namespace  std;


void slove() {
    int n,m;cin >> n >> m;
    vector<int>dp(n + m,0);
    dp[0] = 1;
    for (int i = 1; i <= n; i++) { // 遍历背包
        for (int j = 1; j <= m; j++) { // 遍历物品
            if (i - j >= 0) dp[i] += dp[i - j];
       }
    }
    cout << dp[n] << endl;
}


int main() {
    cin.tie(0) -> ios::sync_with_stdio(0);
    cout.tie(0) -> ios::sync_with_stdio(0);
    #if Run
        int _;cin>>_;while(_--) slove();
    #else 
        slove();
    #endif
    return 0;
}
// https://kamacoder.com/problempage.php?pid=1067
