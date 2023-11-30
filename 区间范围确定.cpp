#include<bits/stdc++.h>
using namespace std;

int a[100000];
int b[100000]={0};
int main(){
    int L,M;
    int ans=0;
    cin>>L>>M;
    for(int i=0;i<2*M;i++){
        cin>>a[i++]>>a[i];
    }
    for(int i=0;i<2*M-1;i+=2){
        for(int j=a[i];j<=a[i+1];j++){
            b[j]=1;
        }
    }
    for(int i=0;i<=L;i++){
        if(b[i]==0){
            ans++;
        }
    }
    cout<<ans;
}