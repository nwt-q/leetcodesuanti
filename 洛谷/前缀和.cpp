#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define Run 0
#define endl '\n'
const int N = 50010;
ll ans[N];
//前缀和
//求子段和
int cal(int x)
{
    return ((x+1)/2+x/4);
}

void slove(){
    int n;cin>>n;
    for(int i=1;i<=n;i++) {
        int x;cin>>x;
        ans[i] = ans[i-1] + x;//收集前面元素的值储存在数组种
    }
    int T;cin>>T;
    while(T--) {
        int l,r;cin>>l>>r;
        cout<<ans[l+r-1] - ans[l-1]<<endl;
        //前缀和
    }
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    #if Run
        int _;cin>>_;while(_--) slove();
    #else
        slove();
    #endif
    return 0;
}
