 #include<bits/stdc++.h>
#define ll long long
using namespace std;

ll x[600000];
int main(){
    ll n,Q;
    cin>>n>>Q;
    for(int i=1;i<=n;i++){
            int a,b,c;
        scanf("%dx%d=%d",&a,&b,&c);
        // cout<<a<<b<<c;
        x[i]=(c-b)/a;
    }
    sort(x+1,x+n+1);
    ll nx=unique(x+1,x+n+1)-x-1;
    while(Q--){
        ll L,R;
        cin>>L>>R;
        ll L1=lower_bound(x+1,x+nx+1,L)-x-1;
        ll R1= upper_bound(x+1,x+nx+1,R)-x-1;
        cout<<R1-L1<<"\n";
    }
    return 0;
}
//https://www.bilibili.com/video/BV1jz4y1A7Mz?p=8&vd_source=f02990bf5222d371585fba0726513017
//https://www.luogu.com.cn/problem/P9853
