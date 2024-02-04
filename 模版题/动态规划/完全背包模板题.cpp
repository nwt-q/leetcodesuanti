#include<bits/stdc++.h>
#define Run 0
#define endl "\n"
#define n 1010
#define m 1010
using ll = long long;
using namespace  std;
ll dp[n];


void slove() {
    ll N,V;cin >> N >> V; //这个是物品数 N 背包体积V
    memset(dp,0,sizeof dp);
    for (int i = 0; i < N; i++) {
        ll w,v; cin >> w >> v;
        for (int j = w; j <= V; j++) {
            dp[j] = dp[j] > dp[j - w] + v ? dp[j] : dp[j - w] + v;
        }
    }
    cout << dp[V] << endl;
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
