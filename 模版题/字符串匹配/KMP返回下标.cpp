class Solution {
public:
//KMP
    int strStr(string s, string t) {
        int n = s.size(),m=t.size();
        if(m==0) return 0;
        s.insert(s.begin(),' ');
        t.insert(t.begin(),' ');
        vector<int> next(m+1);
        //处理next数组
        for(int i=2,j=0;i<=m;i++){
            while(j&&t[i]!=t[j+1]) j = next[j];
            if(t[i] == t[j+1]) j++;
            next[i] = j;
        }
        //匹配过程
        for(int i=1,j=0;i<=n;i++){
            while(j&&s[i] != t[j+1]) j = next[j];
            if(s[i]==t[j+1]) j++;
            if(j==m) return i-m;
        }
        return -1;
    }
};
//https://leetcode.cn/problems/find-the-index-of-the-first-occurrence-in-a-string/description/
