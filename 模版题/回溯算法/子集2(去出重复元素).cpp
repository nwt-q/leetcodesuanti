class Solution {
private:
    vector<vector<int>>result;
    vector<int>vec;
public:
    void backtracking(vector<int>&nums,int StratIndex,vector<bool>& used) {
        result.push_back(vec);
        // used[i－1] ==true，说明同一树枝candidates[i－1]使用过
        // used[i－1] ==false，说明同一树层candidates[i－1]使用过
        //而我们要对同一树层使用过的元素进行跳过
        for(auto i = StratIndex; i < nums.size(); ++i) {
            if (i>0 && nums[i] == nums[i-1] && used[i-1] == false) {
                continue;
            }
            vec.push_back(nums[i]);
            used[i] = true;
            backtracking(nums,i+1,used);
            used[i] = false;
            vec.pop_back();
        }
    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        result.clear(),vec.clear();
        vector<bool> used(nums.size(),false);
        sort(nums.begin(),nums.end());
        backtracking(nums,0,used);
        return result;
    }
};

//https://leetcode.cn/problems/subsets-ii/
