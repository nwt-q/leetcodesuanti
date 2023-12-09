#include <iostream>
using namespace std;
//不用存储直接输出
int main() {
    int N, M;
    int i=0;
    cin >> N >> M;  // 输入N和M
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
    return 0;
}
