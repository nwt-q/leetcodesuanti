#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define Run 0
#define N 3.1415927

int cal(int x)
{
    return ((x+1)/2+x/4);
}

void slove(){
    int cnt=0;
    int a,b,n;cin>>a>>b>>n;
    int B(b),A(a);
    while(B<n) {
        if(A<n) A=B;cnt++;
        B += (b-a);cnt++;
    }
    cout<<cnt+(A<n)<<endl;
}

int main() {
    cin.tie(0) -> ios::sync_with_stdio(0);
    cin.tie(0) -> ios::sync_with_stdio(0);
    #if Run
        int _;cin>>_;while(_--) slove();
    #else
        slove();
    #endif
    return 0;
}
