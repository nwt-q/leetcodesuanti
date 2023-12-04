#include<bits/stdc++.h>
using namespace std;
const int N = 20;
int dp[N];
int main()
{
    int m = 0;
    string s;
    cin >> s;
    for(int i=0;i<s.size()-1;i++)
    {
        if(s[i]==s[i+1])
        {
            dp[i] = dp[i+1] = dp[i-1]+2;//三点间的关系
            i++;
        }
        else dp[i] = 0; 
        m = max(m,dp[i]);
    }
    cout << m;
    return 0;
}//偶串
