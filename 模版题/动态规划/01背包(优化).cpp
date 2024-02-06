#include<bits/stdc++.h>
#define Run 0
#define endl "\n"
#define M 1010
using ll = long long;
using namespace  std;



void slove() {
    int N,V; cin >> N >> V;
    ll dp[M];memset(dp,0,sizeof dp); //压缩背包为一维
    for (int i = 1; i <= N; i++) { //遍历物品
       ll v,w;cin >> w >> v; //输入物体重量
        for (int j = V; j >= w; --j) { //遍历背包 (从后往前遍历,防止重复)
            dp[j] = dp[j] > (dp[j - w] + v) ? dp[j] : dp[j - w] + v;
        }
    }
    cout << dp[V] << endl; //(输出体积为V时背包的最大重量为dp[V])
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

//https://www.acwing.com/problem/content/2/
