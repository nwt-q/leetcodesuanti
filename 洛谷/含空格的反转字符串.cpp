#include<bits/stdc++.h>
using namespace std;
//1
int main(){
    char b[100];  
    std::scanf("%[^\n]s", b);
    string s(b); //给s初始化为b
    s.assign(b,strlen(b)); //将b赋值给s
    cout<<s.substr(0,6)<<"\n";
    reverse(s.begin(),s.end());
    cout<<s;
}

//服考试的时候就是想不到GTP?


//2
// int main() {  
//     char b[100];  
//     std::scanf("%[^\n]s", b);  // 读取直到遇到换行符或字符串结束  
//     // s.assign(b, strlen(b));
//     // std::string c(b, b + strlen(b));  // 复制b到c，为了反转  //复制的时候会将空格读取
//     std::reverse(c.begin(), c.end());  // 反转字符串c  

//     std::cout << c << std::endl;  // 打印反转后的字符串并添加换行符  
//     return 0;  
// }

//3
// int main(){
//     char b[100];
//     scanf("%[^\n]s",&b);
//     // string s(b);
//     // cout<<s;
//     // reverse(s.begin(),s.end());
//     // s[strlen(b)]='\0';
//     char c[1000];
//     for(int i=strlen(b)-1,j=0;i>=0;i--,j++){
        
//         c[j]=b[i];
//     }
//     c[strlen(b)]='\0';
//     // cout<<s;
//     printf("%s",c);
// }
