class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cnt = 0;
        int ans = INT_MIN;
        for(int i = 0;i < nums.size();i++) {
            cnt += nums[i];
            if (cnt > ans) ans = cnt;
            if (cnt <= 0) cnt = 0;
        }
        return ans;
    }
};

//统计区间内最大和,双指针
//终止条件 cnt < 0 切换下一个区间
