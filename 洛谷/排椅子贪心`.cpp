//https://ac.nowcoder.com/acm/problem/16618


 #include<bits/stdc++.h>
using namespace std;

struct node{
    int indx;//用来存储数组下标
    int cnt;//用来计数
};

bool cmp(node a,node b){  //判断是否是数字最大的一个就是经过最多谈话人的道
    return a.cnt>b.cnt;
}
node row[2010],cow[2010];

bool cmp2(node a,node b){
    return a.indx<b.indx;//判断是否为下标最小的
}

int main(){
    int M,N,K,L,D;
    int O=0,I=0;
    cin>>M>>N>>K>>L>>D;
    for(int i=0;i<=N;i++){
        cow[i].indx=i;//将下标记录
    }
    for(int i=0;i<=M;i++){
        row[i].indx=i;
    }
    for(int i=0;i<D;i++){
        int x,y,p,q;
        cin>>x>>y>>p>>q;//输入点
        if(y==q){
           row[min(x,p)].cnt++; //如果同 row
        }
        if(x==p){
            cow[min(y,q)].cnt++; //如果同cow
        }
    }
    sort(cow,cow+N+1,cmp); //排序
    sort(row,row+M+1,cmp);
    sort(row,row+K,cmp2); //对下标排序否则只有%10因为要输出下标最小而且穿过人最多的道的位置
    sort(cow,cow+L,cmp2);
    
    for(int i=0;i<K;i++){
        cout<<row[i].indx<<" "; //输出y
    }
    cout<<"\n";
    for(int i=0;i<L;i++){
        cout<<cow[i].indx<<" "; //输出x
    }
}
