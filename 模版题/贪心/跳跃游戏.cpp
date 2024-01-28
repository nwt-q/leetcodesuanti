class Solution {
public:
    bool canJump(vector<int>& nums) {
        int len = nums.size();
        int i = 0;
        int canGet = nums[0];
        while(i < len && i <= canGet){
            canGet = canGet > (i+nums[i]) ? canGet : (i+nums[i]);
            i++;
        }
        if (i == len){
            return true;
        }
        return false;
    }
};

//区间变化,统计区间,通过不断变化的区间在区间内找最大值
//怎么样统计区间变化多少次?

//https://leetcode.cn/problems/jump-game/
