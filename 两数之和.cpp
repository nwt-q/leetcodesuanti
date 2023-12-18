class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    int n = nums.size();//提高代码风格
    for(int i = 0;i < n;i++){
        for(int j = i + 1;j < n;j++){
            if(nums[i] +nums[j] == target){     
                vector<int>ans;
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return nums;
    }
};
