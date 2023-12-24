/*
* 12/24/tm /诸天神佛,佑我上分
*/
//https://ac.nowcoder.com/acm/contest/72266/A

#include<bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define PII pair<int,int>
#define ll long long
#define multicase 0
#define N 10000
#define mod 998244353

int a[N], b[N];
ll ans=0;

void read(int&x) {
    x=0; char ch=getchar(); int f=1;
    while(!isdigit(ch)) f=ch=='-'?-1:1, ch=getchar();
    while(isdigit(ch)) x=x*10+ch-48, ch=getchar();
    x=f*x;
}

void read(ll&x) {
    x=0; char ch=getchar(); int f=1;
    while(!isdigit(ch)) f=ch=='-'?-1:1, ch=getchar();
    while(isdigit(ch)) x=x*10+ch-48, ch=getchar();
    x=f*x;
}

template<typename... Args>
void rd(Args&... args) {
    std::initializer_list<int>{(read(args), 0)...};
}


void init() { 
    //     M.reserve(1024); M.max_load_factor(0.25);
}

void solve() {
    int n;std::cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    string s;std::cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='T'){
            ans+=a[i];
        }
        if(s[i]=='F'){
            int c = floor(a[i]/100);
            ans +=max(5,c);
        }
    }
    std::cout<<ans;
}

int main() {
    init();
    #if multicase
    int _; cin>>_; while(_--) solve(); 
    #else
    solve();
    #endif
}

// Fenwick tree
int t[N];
void add(int x,int v){for(;x<N;x+=x&-x)t[x]+=v;}
int ask(int x,int a=0){for(;x;x^=x&-x)a+=t[x]; return a;}

// Math
int gcd(int a,int b){return b?gcd(b,a%b):a;}
ll qp(ll b,int t,ll a=1){for(;t;t>>=1,b=b*b%mod)if(t&1)a=a*b%mod; return a;}
int inv(ll x){return qp(x,mod-2);}

// Joint Set
int f[N];
int find(int x){return f[x]==x?x:f[x]=find(f[x]);}
