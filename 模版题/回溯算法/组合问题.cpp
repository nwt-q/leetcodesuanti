class Solution {
private:
    //递归函数参数
    vector<int>vec;
    vector<vector<int>>v;
   //终止条件
    void backtracking(int n,int k,int startIndex) {
        if(vec.size()==k) {
            v.push_back(vec);
            return;
        }
      //单层搜索的过程
        for(auto i = startIndex;i<=n;i++) {
            vec.push_back(i);
            backtracking(n,k,i+1);
            vec.pop_back();
        }
    }

public:
    vector<vector<int>> combine(int n, int k) {
        v.clear();
        vec.clear();
        backtracking(n,k,1);
        return v;
    }
};
//https://leetcode.cn/problems/combinations/description/
