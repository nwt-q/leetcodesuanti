#include<bits/stdc++.h>
using namespace std;
//B2113 输出亲朋字符串
int main(){
    string s;
    cin>>s;
    char ch[1000];
    ch[0]=(char)(s[0]+s[1]);
    for(int i=1;i<s.size();i++){
        ch[i]=s[i]+s[i+1];
    }
    ch[s.size()-1] =(char)s[s.size()-1]+s[0];
    for(int i=0;i<s.size();i++){
        cout<<ch[i];
    }
}
