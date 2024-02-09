//确定滑动窗口最大值
//自己实现一个队列的类型,实现自己的数据结构
class MyQueue {
    public:
        deque<int> que;//使用deque来实现单调队列
        //每次弹出的时候,比较当前要弹出的数值是否等于队列出口元素的数值,如果相等则弹出
        //同时pop之前判断队列是否为空
        void pop(int value) {
            if(!que.empty() && value == que.front()) {
                que.pop_front();
            }
        }
        //如果push的数值大于入口元素的数值,那么就将队列后端的数值弹出
        void push(int value) {
            while(!que.empty() && value > que.back()) {
                que.pop_back();
            }
            que.push_back(value);
        }
        //查询当前队列里的最大值,直接返回队列前端也就是front就可以了
        int front() {
            return que.front();
        }
};
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        MyQueue que;
        vector<int> ans;
        for(int i = 0;i < k;i++) {
            que.push(nums[i]);
        }
        ans.push_back(que.front());//ans记录前K个元素最大值
        for(int i = k ;i < nums.size();i++) {
            que.pop(nums[i - k]);
            que.push(nums[i]);
            ans.push_back(que.front());
        }
        return ans;
    }
};

//https://leetcode.cn/problems/sliding-window-maximum/description/
