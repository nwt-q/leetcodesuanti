class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left=0,right=nums.size();
        while(left<right){
            int mid = (right-left)/2+left;
            if(target>nums[mid]){
                left=mid+1;
            }else if(target<nums[mid]){
                right=mid;
            }else{
                return mid;
            }
        }
        return -1;
    }
};

//leetcode :
// https://leetcode.cn/problems/binary-search/
