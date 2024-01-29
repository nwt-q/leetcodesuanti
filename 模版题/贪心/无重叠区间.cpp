class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),[](const vector<int>&a,const vector<int>&b) {
            return a[0] < b[0];
        });
        if (intervals.size() == 0) return 0;
        int cnt = 0;
        int end = intervals[0][1];
        for(int i = 1; i < intervals.size(); i++) {
           if (intervals[i][0] >= end) end = intervals[i][1]; //无重叠情况
           else {
               end = min(end,intervals[i][1]);
               cnt++; //记录重叠情况
           }
        }
        return cnt;
    }
};

//对区间统一端点进行排序
//然后用每个区间的边界进行比较
//如果没有冲突计数

//https://leetcode.cn/problems/non-overlapping-intervals/description/
