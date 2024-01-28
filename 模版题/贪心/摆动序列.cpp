class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        if (nums.size() <= 1) return nums.size();
        int curDiff = 0,preDiff = 0,result = 1;
        for (int i = 0; i < nums.size() - 1; i++) {
            curDiff = nums[i+1] - nums[i];
            //出现峰值
            if ((preDiff <= 0 && curDiff > 0) || (preDiff >= 0 && curDiff < 0)) {
                curDiff = nums[i + 1] - nums[i];
                
                if ((preDiff <= 0 && curDiff > 0) || preDiff >= 0 && curDiff < 0) {
                    result++;
                    preDiff = curDiff; //更新摆动变化
                }
            }
        }
        return result;
    }
};

//统计峰值,区间内选择最大峰值
//https://leetcode.cn/problems/wiggle-subsequence/
