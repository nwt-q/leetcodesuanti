class Solution {
public:
//BF
    int strStr(string s, string t) {
        int n = s.size(),m = t.size();
        for(int i=0;i<=n-m;i++){
            int j = i,k=0;
            while(k<m && s[j]==t[k]){
                j++;k++;
            }
            if(k==m) return i;
        }
        return -1;
    }
};

//https://leetcode.cn/problems/find-the-index-of-the-first-occurrence-in-a-string/description/
