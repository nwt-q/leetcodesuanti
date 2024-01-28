class Solution {
public:
    int jump(vector<int>& nums) {
        int cnt = 0;
        int ans = 0;
        int next = 0;
        if (nums.size() == 1) return 0;
        for (int i = 0; i < nums.size() - 1; i++) {
            cnt = cnt > i + nums[i] ? cnt : i + nums[i];
            if(i == next) {
                next = cnt;
                ans++;
            }
        }
        return ans;
    }
};

//通过 if 判断统计 每次当循环到达最后就收最后的结果即 max( cnt , i + nums[i] )然后统计收了多少次
