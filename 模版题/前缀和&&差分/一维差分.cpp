#include<bits/stdc++.h>
// #include<iostream>
// #include<algorithm>
// #include <cstring>
using namespace std;
using ll = long long;
#define Run 0
#define endl '\n'
const int N = 1e6+10;
ll sum[N];
ll a[N];
//一维差分
//https://ac.nowcoder.com/acm/contest/135/I
int cal(int x)
{
    return ((x+1)/2+x/4);
}

void slove(){
   ll n,M;cin>>n>>M;
   for(int i=1;i<=n;i++) cin>>a[i];
   for(int i=1;i<=n;i++) sum[i] = a[i]-a[i-1];//差分公式
   while(M--) {
        int q,L,R,P;
        cin>>q>>L>>R>>P;
        if(q==1) {//区间内加减
            //在l-r内减P
            sum[L]-=P,sum[R+1]+=P;
        }else{
            //在l-r内加P
            sum[L]+=P,sum[R+1]-=P;
        }
   }
   ll l,r,ans=0;
   cin>>l>>r;
   for(int i=1;i<=n;i++) {//恢复为原数组
       a[i] = a[i-1]+sum[i];
   }
   for(int i=l;i<=r;i++) ans+=a[i];
   cout<<ans<<endl;//输出答案
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
