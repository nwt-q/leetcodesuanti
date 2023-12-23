#include<iostream>
using namespace std;

int main(){
    int dp[1000];
    string s;
    int cnt=1;
    cin>>s;
    for(int i=1;i<=s.size();i++){
        if(s[i]==s[i-1]){
            cnt++;
        }else{
            cout<<cnt;
            cout<<s[i-1];
            cnt=1;
        }
    }
}
