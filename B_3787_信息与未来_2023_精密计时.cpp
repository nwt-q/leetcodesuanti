#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int a,b,c,d,e,f,g,h;
    scanf("%d:%d:%d.%d %d:%d:%d.%d",&a,&b,&c,&d,&e,&f,&g,&h);
    // printf("%d:%d:%d.%d %d:%d:%d.%d",a,b,c,d,e,f,g,h);
    ll t1=a*360000+b*6000+c*100+d;
    ll t2=e*360000+f*6000+g*100+h;
    cout<<t2-t1;
}