#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    // unordered_map<int int>hash;
    int hash[259];
    memset(hash,0,sizeof(hash));
    string s;int n,cnt=0;
    cin>>n>>s;
    for(int i=0;i<s.size();i++){
        hash[s[i]]++;
        if(hash[s[i]]>=n){
            cout<<s[i];
            cnt++;
            break;
        }
    }
    if(cnt==0){
        cout<<"No";
    }
}
