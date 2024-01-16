#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define Run 0
const int N = 1e5+10;
ll sum[N];
int a[N];

int cal(int x)
{
    return ((x+1)/2+x/4);
}
//前缀和差分
void slove(){
    int n,m;cin>>n>>m;
    for(int i = 1;i<=n;++i) {
        cin>>a[i];
        sum[i] = sum[i-1]+ a[i];//求前缀和
    }
    bool ans = true;//判断能否通过
    ll cnt(0),res(0),now(m);//初始
    for(int i{2};i<=n;i++) { //从而开始循环
        if(a[i]) { //如果a[i]不为0
            cnt += a[i]; //统计伤害
            if(cnt >= m) ans = false; //如果俩0间的伤害大于m
            now -= a[i];//当前学量
        } else {
            cnt = 0;//重新统计区间伤害
            res += (m - now); //统计额外伤害
            now = m;
        }
        if(sum[n] - sum[i] < now) break;//这个是什么?
    }
    if(!ans) cout<<"NO";
    else {
        res += n-1;
        cout<<res;
    }
}

signed main() {
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    #if Run
        int _;cin>>_;while(_--) slove();
    #else
        slove();
    #endif
    return 0;
}
//https://ac.nowcoder.com/acm/problem/265918
