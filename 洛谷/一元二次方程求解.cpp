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
    int a,b,c,x,y;cin>>a>>b>>c;
    int deeta =  b*b - 4*a*c;//判断是否有根
    if(d>=0) {
        if(d>0) {
            x = ((-b) + sqrt(d)/(2*a));//求根公式
            y = ((-b) - sqrt(d)/(2*a));
            cout<<x<<" "<<y;
        }else {
            x = ((-b) + sqrt(d)/(2*a));
            cout<<x;
        }
    }else {
        cout<<-1;
    }
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
