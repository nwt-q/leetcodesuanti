#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define Run 0
#define N 3000
ll a[N];

int cal(int x)
{
    return ((x+1)/2+x/4);
}

void slove(){
    vector<string> v{" /\\ ","/__\\"};
    int n;cin>>n;
    if(n == 0) {//处理特殊情况
        cout << "/\\";//原来头上还有一个角
        return ;
    }
    //这种三角型称为谢尔宾斯基三角形
    for(int i{1};i < n;i++) {
        //扩大容量
        v.reserve(2*v.size());//这个我懂俩倍加1嘛
        //这个是用于数组内插入元素
        //将v整个数组储存在v种,再将v的开头到结尾储存在v中
        v.insert(v.end(),v.begin(),v.end());
        //现在有俩三角形但是形状不规则就是没有空格而且没有分行
       /* 2
        /\/_\/\/_\
        */
       //这样还要有一边
       //这个用于加空格因为打印是二维打印所以空格应该两层for循环
       //而且因为有俩图形所以要一半分开//vec这个时候扩大了so
       for(auto j{0};j < v.size() / 2;j++) {
            for(auto k{0};k < v.size() / 2;k++) {
                v[j] = ' ' + v[j] + ' ';
            }
       }
        //这个时候图形为
        /*   2
        /\    /_\  /\/_\
        */
        //这个时候应该处理第3个三角型 //这个就代表最后一个从中间到结尾
        for(auto j{(int)v.size() / 2};j < v.size(); j++) {
            v[j]+=v[j];
        }
    }
    for(auto& str : v) {
        str.erase(str.find_last_not_of(' ') + 1);
        cout << str << endl;
    }
}


int main() {
    cin.tie(0) -> ios::sync_with_stdio(0);
    cin.tie(0) -> ios::sync_with_stdio(0);
    #if Run
        int _;cin>>_;while(_--) slove();
    #else
        slove();
    #endif
    return 0;
}
//
