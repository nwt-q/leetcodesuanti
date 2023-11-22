/*题目描述:
给定一个只包含加法和乘法的算术表达式，请你编程计算表达式的值。
输入:
1+1*3+4
输出:
8
说明:
计算的结果为8，直接输出8。 
*/

#include<bits/stdc++.h>
#define mod 10000
using namespace std;
//*42 +43//奇数为数偶数为式子

stack<int>QAQ;

int main(){
    int sum=0;
    int a;
    char b;
    for(int i=1;;i++){
        if(i&1){//偶数
            cin>>a;
            QAQ.push(a%mod);//将a%mod压入栈中
        }
        else{
            b=getchar();
            if(b!='+'&&b!='*') break;
            if(b=='*'){
                cin>>a;
                int q=QAQ.top();
                QAQ.pop();
                QAQ.push((a%mod)*q%mod);
                i++;
                }
            }
    }
    while(!QAQ.empty()){
        sum=(sum+QAQ.top())%mod;
        QAQ.pop();
    }
    cout<<sum;
    return 0;
    }
