class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int target = 0;
        for (auto i : nums) {
            target += i;
        }
        //不能将数据分为俩半,说明无法找到使得两个子集的元素和相等。
        if (target % 2 == 1) return false;
        target/=2;
        //确定dp数组涵义
        int dp[2*target];
        //初始化dp数组
        memset(dp,0,sizeof dp);
        //dp数组遍历
        for (int i = 1; i < nums.size(); i++) {
            for (int j = target; j >= nums[i]; j--) {
                dp[j] = max(dp[j], dp[j - nums[i]] + nums[i]);
            }
        }
        //判断返回值
        if ( dp[target] == target) return true;
        else return false;
    }
};

//等和子集一定是数组总和为偶数
//dp[target] == target;

//https://leetcode.cn/problems/partition-equal-subset-sum/
