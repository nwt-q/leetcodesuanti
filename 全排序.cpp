#include<bits/stdc++.h>
using namespace std;

int main(){
    int QAQ[9]={1,2,3,4,5,6,7,8};
    do{
        for(int i=0;i<8;i++){
            cout<<QAQ[i]<<" ";
        }
        cout<<"\n";
    }
    while(next_permutation(QAQ,QAQ+8));
}
//核心函数next_permutation(QAQ,QAQ+8)
//数组QAQ首元素到其第8个元素
