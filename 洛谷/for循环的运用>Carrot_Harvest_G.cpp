#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
//多重循环

int a[25][25];

int main(){
    int n,m,u,g;
    int count=0;
    cin>>n>>m>>u;
    int ans=100000;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }//对于任意一个矩形左上角右上角
   for(int i=0;i<n;i++){//左上角行
        for(int j=0;j<m;j++){//左上角列
            for(int k=i;k<=n;k++){//右上角行
                for(int l=j;l<=m;l++){//右上角列
                    int cnt=0;//统计萝卜数
                    int S=0;//计算面积
                    for(int o=i;o<k;o++){//i到k
                        for(int p=j;p<l;p++){//j到l
                            S++;//上面表示我们的矩阵大小因为我们遍历矩阵我们就可以
                            if(a[o][p]==1){//经过矩阵的1每个位置每次循环++即得到的是矩阵的面积
                                cnt++;//统计萝卜数
                            }
                        }
                    }
                    if(cnt>=u){//当满足我们要拔萝卜的数量就存储起来直到遇到最小的哪个就换掉
                        ans = min(ans,S);
                        if(S<ans)
                            ans=S;
                    }
                }
            }
        }
   }
    cout<<ans<<endl;//输出答案
}

