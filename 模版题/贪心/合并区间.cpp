class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        sort(intervals.begin(),intervals.end(),[](const vector<int>&a,const vector<int>&b) {
            return a[0] < b[0];
        });
        for (int i = 1; i < intervals.size(); i++) {
            if (intervals[i][0] <= intervals[i-1][1]) {
                intervals[i][1] = max(intervals[i][1], intervals[i-1][1]);
                intervals[i][0] = intervals[i-1][0];
            } else {
                ans.push_back({intervals[i-1][0],intervals[i-1][1]});
            }
        }
        ans.push_back({intervals.back()[0], intervals.back()[1]});
        return ans;
    }
};

//对于重复的区间不在进行排除而是进行和并操作

//https://leetcode.cn/problems/merge-intervals/
