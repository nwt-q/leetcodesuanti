class Solution {
private:
    vector<int>v;
    vector<vector<int>>result;
public:
    void backtracking(vector<int>&nums,int StratIndex) {
        if(v.size() > 1) {
            result.push_back(v);
        }

        unordered_set<int> uset;
        for (auto i = StratIndex; i< nums.size(); i++) {
            if ((!v.empty() && nums[i] < v.back()) || uset.find(nums[i]) != uset.end()) {
                continue;
            }
            uset.insert(nums[i]);
            v.push_back(nums[i]);
            backtracking(nums,i+1);
            v.pop_back();
        }
    }
public:
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        result.clear(),v.clear();
        backtracking(nums,0);
        return result;
    }
};
//https://leetcode.cn/problems/non-decreasing-subsequences/description/
