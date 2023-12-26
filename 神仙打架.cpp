#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,M;
    scanf("%d %d",&N,&M);
    char a[1000][1000];
    for(int i=0;i<N;i++){
        scanf("%s",&a[i]);//用字符串输入就是一片
    }
    int b[1000]={0};
    for(int i=0;i<M;i++){//对横向进行遍历
        int max=a[0][i];
        for(int j=0;j<N;j++){ //对上下进行遍历
            if(a[j][i]>max){
                max=a[j][i];//这个时候横向不变纵向变找出最值
            }
        }
        for(int j=0;j<N;j++) //哪个对进行加1
            if(a[j][i]==max) b[j]++;
    }
    int t=0; //统计多少队伍
    for(int i=0;i<N;i++){
        if(b[i]>0) t++;
    }
    printf("%d",t);
    
    return 0;
}
