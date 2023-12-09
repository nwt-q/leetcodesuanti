#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,x;
    int a[1005];
    cin>>n>>x;
     for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int p=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
                if(a[i]*x*x+a[j]*x+a[k]==0){
                    p=1;
                    break;
                    }
                }
            }
        }
    if(p==1){cout<<"YES";}else{cout<<"NO";}
}

