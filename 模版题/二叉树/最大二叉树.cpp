/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
//思路:->这么样构造最大树->每次去找最大值左树然后先上层后下层
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        TreeNode* node = new TreeNode(0);
        if(nums.size() == 1) {
            node -> val = nums[0];//退出条件
            return node;
        }
        //找到数组中最大值对应的下标
        int maxValue = 0;
        int maxValueIndex = 0;
        for (int i = 0; i < nums.size();i++) {
            if (nums[i] > maxValue) {
                maxValue = nums[i];
                maxValueIndex = i;
            }
        }
        node -> val = maxValue;
        //最大值所在的下标左区间,构造左子树
        if (maxValueIndex > 0) {
            vector<int> newVec(nums.begin(),maxValueIndex + nums.begin());
            node -> left = constructMaximumBinaryTree(newVec);
        }
        //最大值所在下标右区间,构造右子树
        if (maxValueIndex < (nums.size()-1)) {
            vector<int> newVec(nums.begin() + maxValueIndex + 1,nums.end());
            node ->right = constructMaximumBinaryTree(newVec);
        }
        return node;
    }
};
