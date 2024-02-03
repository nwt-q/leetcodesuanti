#include<bits/stdc++.h>
#define Run 0
#define endl "\n"
#define n 105
#define m 1010
using ll = long long;
using namespace  std;
ll dp[n][m];


void slove() {
    ll N,V;cin >> N >> V; //这个是物品数 N 背包体积V
    for (int i = 1 ; i <= N; i++) {
        ll w,v;cin >> w >> v; //每个物品的 重量 和 价值
        for (int j = 0; j <= V; j++) {
            if (j >= w) dp[i][j] = max(dp[i-1][j],dp[i - 1][j - w] + v); //递推公式(动态转移方程)
            else dp[i][j] = dp[i - 1][j];
        }
    }
    cout << dp[N][V] << endl;
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
