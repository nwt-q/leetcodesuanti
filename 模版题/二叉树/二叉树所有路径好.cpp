// class Solution {
// public:
//     bool hasPathSum(TreeNode* root, int sum) {
//         if(!root) return false;
//         if(!root->left && !root ->right && sum == root->val) {
//             return true;
//         }
//         return hasPathSum(root->left,sum-root->val) || hasPathSum(root->right ,sum - root->val);
//     }
// };

class Solution {
public:
    void traversal(TreeNode*cur,int sum,vector<int>&result) {
        sum += (cur->val);
        if(cur->left == nullptr && cur ->right == nullptr) {
            result.emplace_back(sum);
            return ;
        }
        if(cur->left) traversal(cur->left,sum,result);
        if(cur->right) traversal(cur->right,sum,result);
    } 
    bool hasPathSum(TreeNode* root, int targetSum) {
        vector<int>result;int sum=0;
        if(root == nullptr) return false;
        traversal(root,sum,result);
        for(auto i:result) {
            if(i==targetSum) {
                return true;
            }
        }
        return false;
    }
};
//https://leetcode.cn/problems/path-sum/description/
