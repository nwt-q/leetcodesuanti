#include<bits/stdc++.h>
#define Run 0
#define endl "\n"
#define N 100005
using unl = __int128_t;
using ll = long long;
using namespace  std;

bool Palindrome(string s) {
    for (int  i = 0 ,k = s.size() - 1; i < s.size() / 2; i++,k--) {
        if(s[i] != s[k]) return false;
    }
    return true;
}


void slove() {
   string s; cin >> s;
   if (Palindrome(s)) {
    cout << s << endl;
   } else {
    string t(s.begin(),s.end() - 1);
    reverse(s.begin(),s.end());
    cout << t + s << endl;
   }
}

signed main() {
    cin.tie(0) -> ios::sync_with_stdio(0);
    cout.tie(0) -> ios::sync_with_stdio(0);
    #if Run
        int _;cin>>_;while(_--) slove();
    #else
        slove();
    #endif
    return 0;
}
