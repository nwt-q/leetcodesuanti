#include<bits/stdc++.h>
using namespace std;

int dfs(int arr[45][45],int ex,int ey,int cx,int cy){//DFS模版
    if(cx==ex&&cy==ey)return 1;  //如果到达终点
    int ans = 0;
    if(cx+1<=ex&&arr[cx+1][cy]!=1){  //向下进行深度遍历如果下一步没有越界而且没有遇到马点进行遍历否则不遍历换个方向
        ans+=dfs(arr,ex,ey,cx+1,cy); //递归遍历
    }
    if(cy+1<=ey&&arr[cx][cy+1]!=1){ // 向右进行遍历
        ans+=dfs(arr,ex,ey,cx,cy+1);
    }
    return ans; // 返回遍历次数
}
int main(){
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    std::ios::sync_with_stdio(false);
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    int arr[45][45];
    memset(arr,0,sizeof(arr));
    a+=2,b+=2,c+=2,d+=2;
    arr[c][d]=1;
    arr[c+2][d+1]=1;
    arr[c+1][d+2]=1;
    arr[c-1][d+2]=1;
    arr[c-2][d+1]=1;
    arr[c-2][d-1]=1;
    arr[c-1][d-2]=1;
    arr[c+1][d-2]=1;
    arr[c+2][d-1]=1;
    cout<<dfs(arr,a,b,2,2);
}
//https://www.luogu.com.cn/problem/P1002
