#include<bits/stdc++.h>
using namespace std;

void QAQ(int N,int M){
    int count=0;
    char a[N+3][M+3];
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            if(a[i][j]=='*'){
                 cout<<'*';
            }
            else{
                for(int m =i-1;m<=i+1;m++)
                    for(int n =j-1;n<=j+1;n++)
                        if(a[m][n]=='*') count++;
                cout<<count;
                count=0;
            }
        }
         cout<<"\n";
    }
}

int main(){
    int N,M;
    cin>>N>>M;
    QAQ(N,M);
    return 0;
}
