class Solution {
    vector<vector<int>>v;
    vector<int>vec;
    //int startIndex这个可以去重
    void backtracking(int target,vector<int>& candidates,int sum,int startIndex) {
        if (sum > target) {
            return;
        }
        if(sum==target) {
            v.push_back(vec);
            return;
        }
        for(auto i = startIndex; i<candidates.size();i++) {
            vec.push_back(candidates[i]);
            sum+=candidates[i];
            backtracking(target,candidates,sum,i);//i不加1表示可以重复使用这个
            sum-=candidates[i];
            vec.pop_back();
        }
    }
    
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vec.clear();v.clear();
        backtracking(target,candidates,0,0);
        return v;
    }
};
