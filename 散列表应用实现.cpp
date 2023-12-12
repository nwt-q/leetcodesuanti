#include<bits/stdc++.h>
using namespace std;
#define ll long long
//typedef template<typename T> L
//散列表
#define M 1000000
#define NIL (-1)
#define L 14

char H[M][L];
//将字符转化为数字进行存储
template<typename T>
int getChar(T ch){
    switch(ch){
        case 'A':
            return 1;
        case 'B':
            return 2;
        case 'C':
            return 3;
        case 'D':
            return 4;
        default:
            return 0;
    }
}

template<typename T>
ll getKey(T str[]){
    ll sum=0,p=1,i;
    for(i=0;i<strlen(str);i++){
        sum+=p*getChar(str[i]);
        p*=5;
    }
    return sum;
}

int h1(int Key){return Key%M;} 
int h2(int key){return 1+(key%(M-1));}

template<typename T>
int find(T str[]){
    ll key,i,h;
    key = getKey(str);
    for(i=0;;i++){
        h = (h1(key)+i*h2(key))%M;
        if(strcmp(H[h],str)==0) return 1;
        else if(strlen(H[h])==0) return 0;
    }
    return 0;
}
template<typename T>
int insert(T str[]){
    ll key,i,h;
    key=getKey(str);//将字符串转化为数值
    for(i=0;;i++){
        h = (h1(key)+i*h2(key))%M;
        if(strcmp(H[h],str)==0) return 1;
        else if(strlen(H[h])==0){
            strcpy(H[h],str);
            return 0;
        }
    }
    return 0;
}

int main(){
    int i,n,h;
    char str[L],com[9];
    //将M的元素都初始化为'\0'
    for(i=0;i<M;i++){
        H[i][0]='\0';
    }
    //输入我们要输入的长度,当做循环
    cin>>n;
    for(i=0;i<n;i++){
        //输入一个将俩字符串分别存储在不同地方
        cin>>com>>str;
        //判断我们要处理的类型,如果我们要处理的类型为i就
        if(com[0]=='i'){
            insert(str);
        }else{
            if(find(str)){
            cout<<"Yes"<<'\n';
            }else{
            cout<<"No"<<"\n";
            }
        }
    }
}

// 6 
// insert AAA
// insert AAC
// find AAA
// find CCC
// insert CCC
// find CCC

// Yes
// No
// Yes

