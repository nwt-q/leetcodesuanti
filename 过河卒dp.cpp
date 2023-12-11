#include<bits/stdc++.h>
using namespace std;

int main(){
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    std::ios::sync_with_stdio(false);
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    int arr[45][45];
    long long step[45][45];
    memset(arr,0,sizeof(arr));
    a+=1,b+=1,c+=1,d+=1;
    arr[c][d]=1;
    arr[c+2][d+1]=1;
    arr[c+1][d+2]=1;
    arr[c-1][d+2]=1;
    arr[c-2][d+1]=1;
    arr[c-2][d-1]=1;
    arr[c-1][d-2]=1;
    arr[c+1][d-2]=1;
    arr[c+2][d-1]=1;
    step[1][1]=1;
    for(int i=1;i<=a;i++)
	for(int j=1;j<=b;j++) 
            if((i!=1||j!=1)&&arr[i][j]!=1) 
                step[i][j]=step[i-1][j]+step[i][j-1];//不能走进马的控制点
    cout<<step[a][b];
}
