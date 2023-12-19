class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        unordered_map<int, int> hash;
        int count = 0;
        for (int n1 : nums1) {//迭代num1
            for (int n2 : nums2) {//迭代num1
                hash[n1 + n2]++;//两数相加的和储存在哈希表中
            }
        }
        for (int n3 : nums3) {
            for (int n4 : nums4) {
                auto it = hash.find(-(n3 + n4));//在哈希表中查找有没有n3+n4的相反数
                if (it != hash.end()) {//迭代将找到的而且没有重复的值相加
                    count += it->second;
                }
            }
        }
        return count;
    }
};
//https://leetcode.cn/problems/4sum-ii/description/
