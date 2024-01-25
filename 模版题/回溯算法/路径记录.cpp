class Solution {
private:
    vector<vector<int>> result;
    vector<int>v;
public:
    void backtracking(vector<int>&nums,int startIndex) {
        result.push_back(v);
        if (startIndex >= nums.size()) {
            return ;
        }
        for(auto i = startIndex;i < nums.size(); ++i) {
            v.push_back(nums[i]);
            backtracking(nums,i+1);
            v.pop_back();
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        result.clear(),v.clear();
        backtracking(nums,0);
        return result;
    }
};
//https://leetcode.cn/problems/subsets/
