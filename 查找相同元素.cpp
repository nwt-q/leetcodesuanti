#include<bits/stdc++.h>
using namespace std;

void QAQ(void){
    int a,b;
    int c[100000];
    int cnt=0;
    cin>>a>>b;
    for(int i=0;i<a;i++){
        cin>>c[i];
    }
    for(int j=0;j<a;j++){
         if(c[j]==b){
            cout<<"YES"<<"\n";
            break;
        }else{
            cnt++;
        }
        if(cnt==a){
            cout<<"NO"<<"\n";
        }
    }
}

int main(){
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    std::ios::sync_with_stdio(false);
    int n;
    cin>>n;
    while(n--) QAQ();
}
