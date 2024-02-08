class Solution {
public:
    vector<vector<int>> result;
    vector<int>path; // 0到终点的路径
    void dfs (vector<vector<int>>& graph,int x) {
        //要求从结点0 到结点 n - 1 的路径并输出,所以是 graph.size() - 1
        if (x == graph.size() - 1) {  //找到符合条件的一条路径
            result.push_back(path);
            return ;
        }
        for (int i = 0; i < graph[x].size(); i++) {
            path.push_back(graph[x][i]);
            dfs(graph,graph[x][i]);
            path.pop_back();
        }
    }

    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        path.push_back(0);
        dfs(graph,0);
        return result;
    }
};


//dfs模版
/*
void backtracking(参数) {
    if (终止条件) {
        存放结果;
        return;
    }
    for (选择：本层集合中元素（树中节点孩子的数量就是集合的大小）) {
        处理节点;
        backtracking(路径，选择列表); // 递归
        回溯，撤销处理结果
    }
}
*/
//https://leetcode.cn/problems/all-paths-from-source-to-target/
