class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int cnt=0,result=INT_MAX;//这里我设置了计数器
        for(int j=0,i=0;j<nums.size();j++){ //这里的j是终点也就是快指针
            cnt+=nums[j];//这里统计和用于与target进行比较
           while(cnt>=target){ //当我们的cnt>=target时也就代表我们的快指针到达终点
               result=min(result,j-i+1); //然后每次移动取最小的哪个
               cnt-=nums[i++]; //先删除慢指针所指的元素然后慢指针向前移动
           }
       }
       return result == INT_MAX ? 0 : result; //返回值与INT_MAX进行比较
       //如果相同者表示没有进while也就没有值
    }
};

//题目:209. 长度最小的子数组
//https://leetcode.cn/problems/minimum-size-subarray-sum/description/
