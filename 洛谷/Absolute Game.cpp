//贪心
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define Run 0
#define N 1010
#define inf 0x3f3f3f3f
#define endl "\n"
int a[N];int b[N];

int cal(int x)
{
    return ((x+1)/2+x/4);
}

void slove(){
    int n;cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    int ans = 0;
    for(int i = 0;i<n;i++) {
        int x = inf;//让x保持最大
        for(int j=0;j<n;j++) {
            x = min(x,abs(a[i]-b[j]));//在a确定的时候确定b的最小的
        }
        ans = max(ans,x);//然后回到a中取最大的
    }
    cout<<ans<<endl;
}

signed main() {
    cin.tie(0) -> ios::sync_with_stdio(0);
    cin.tie(0) -> ios::sync_with_stdio(0);
    #if Run
        int _;cin>>_;while(_--) slove();
    #else
        slove();
    #endif
    return 0;
}
