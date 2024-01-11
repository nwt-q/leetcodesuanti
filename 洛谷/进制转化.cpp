// #include<bits/stdc++.h>
// using namespace std;
// string a;
// int c[10000000],d,e,f,g,sum,ans;
// int main()
// {
//     scanf("%d",&d);
//     cin>>a;
//     scanf("%d",&f);
//     for(int x=0;x<a.size();x++){
//         if(a[x]<'A'){
//             e=pow(d,a.size()-x-1);
//             e*=(a[x]-'0');
//             sum+=e;
//         }
//         else{
//             e=pow(d,a.size()-1-x);
//             e*=(a[x]-'A'+10);
//             sum+=e;
//         }
//     }
//         while(sum>0){
//         c[g++]=sum%f;
//         sum/=f;
//     }
//     for(int x=g-1;x>=0;x--){
//         if(c[x]>=10)printf("%c",c[x]+'A'-10);
//         else printf("%d",c[x]);
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;
// string a;
// int b[10000000];
// int main(){
//     int c,d,e;
//     int j=0;
//     int sum=0;
//     cin>>c>>a>>d;
//     // cout<<c<<a<<d<<'\n';
//     for(int i=0;i<a.size();i++){
//         if(a[i]<'A'){
//             e = pow(c,a.size()-i-1);//计算出当前位的权值
//             e*=(a[i]-'0'); //因为是字符串所以要-'0'以为每个字符以\0结尾
//             sum+=e;
//         }else{
//             e = pow(c,a.size()-i-1);
//             e*=(a[i]-'A'+10);//因为大于A所以要减去'A'的大小便是该位
//             sum+=e; //将每一位相加得到10位数
//         }
//     }
//     // cout<<sum<<"\n";
//     while(sum>0){
//         b[j++]=sum%d;
//         sum/=d;
//     }
//     // cout<<sum<<"\n";
//     for(int i=j-1;i>=0;i--){
//         if(b[i]>=10)
//             cout<<(char)(b[i]+'A'-10);
//             // printf("%c",b[j]+'A'-10);
//         else
//             cout<<(int)b[i];
//     }
// }

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int d[100000];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    char a[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    int n,m;
    int count=0;
    string s;
    int i=0;
    cin>>n>>s>>m;
    for(int i=0;i<s.size();i++){
        for(int j=0;j<16;j++){
            if(a[j]==s[i]){
                count=count*n+j;
            }
        }
    }
    while(count)
    {
        d[i]=count%m;
        count/=m;
        i++;
    }
    for(int j=i-1;j>=0;j--){
        if(d[j]>=10)
            cout<<(char)(d[j]+'A'-10);
        else
            cout<<d[j];
    }
}
