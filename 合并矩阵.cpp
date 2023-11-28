#include <bits/stdc++.h>
using namespace std;

int a[2050][2050];
int b[1010][1010];

int main(){
    int m,n;
    cin>>m>>n;
    for(int i=0;i<(2*m);i++){
        for(int j=0;j<(2*n);j++){
            cin>>a[i][j];
        }
    }
    for(int i=0,o=0;i<2*m-1;i+=2,o++)
    {
        for(int j=0,p=0;j<2*n-1;j+=2,p++)
        {
            b[o][p]=a[i][j]+a[i][j+1]+a[i+1][j]+a[i+1][j+1];
            
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
            cout<<b[j][i]<<' ';
        cout<<endl;
    }
    return 0;
}
