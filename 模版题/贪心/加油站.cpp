class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int Min = INT_MAX;
        int spare = 0; 
        int len = gas.size(); //数组长度
        int index = 0; //起始位置下标

        for (int i = 0; i < len; i++) {
            spare += gas[i] - cost[i]; //更新剩余汽油量
            if (spare < Min) { //如果当前剩余汽油量小于最小剩余汽油量
                Min = spare; //更新最小剩余汽油量
                index = i;
            }
        }
        if (spare < 0) return -1;
        if (Min >= 0) return 0;
        return (index + 1); 
    }
};

//暴力会超时
//https://leetcode.cn/problems/gas-station/
