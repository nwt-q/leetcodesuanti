class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        if (g.size() == 0 || s.size() == 0) return 0;
        int cnt = 0;
        sort(g.begin(),g.end());
        sort(s.begin(),s.end(),[](const int& a,const int& b){
            return a < b;
        });
        int index = s.size() - 1;
        for(int i = g.size() - 1;i >= 0; i--) { //遍历胃口
            if(index >= 0 && s[index] >= g[i]) { //遍历饼干
                cnt++;
                index--;
            }
        }
        return cnt;
    }
};

//最大饼干满足最大胃口
// https://leetcode.cn/problems/assign-cookies/description/
