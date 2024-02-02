#include<bits/stdc++.h>
#define Run 0
#define endl "\n"
#define N 105
using ll = long long;
using namespace  std;

//问题 : 输入俩个数,一个数代表 我们要输出的这个数的位数 , 一个代表我们每一位上的数相加和不大于的数M,输出一个数让这个N位数每个位上的和不大于M的最大数

void slove() {
    //不用存储直接输出
    int N, M;
    int i=0;
    cin >> N >> M;  // 输入N和M 其中N是位数  M是每个每个位总和不大于N的数
    long long ans=0;
    if(M<10){
        cout<<M;
        for(int j=1;j<N;j++){
           cout<<0;
        }
    }else{
        while(M-9>0&&i<N){
            cout<<9;
            i++;
            M-=9;
        }
        if(M<10&&i<N){
            cout<<M;
            if(i<N){
                for(int j=1;j<N-i;j++){
                    cout<<0;
                }
            }
        }else if(M>10&&i<N){
            cout<<9;
        }
    }
}


int main() {
    cin.tie(0) -> ios::sync_with_stdio(0);
    cout.tie(0) -> ios::sync_with_stdio(0);
    #if Run
        int _;cin>>_;while(_--) slove();
    #else 
        slove();
    #endif
    return 0;
}


