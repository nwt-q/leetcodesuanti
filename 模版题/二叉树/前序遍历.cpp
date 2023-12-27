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
//前序遍历
  vector<int> t(TreeNode* cur) {  
    vector<int> ans;  
    if (cur == nullptr) return ans;  
    ans.push_back(cur->val);  
    // 合并左子树的遍历结果  
    vector<int> left = t(cur->left);  
    ans.insert(ans.end(), left.begin(), left.end());  
    // 合并右子树的遍历结果  
    vector<int> right = t(cur->right);  
    ans.insert(ans.end(), right.begin(), right.end());  
    return ans; // 返回合并后的结果  
}
//其实可以传一个vector容器会更简单不用合并
    vector<int> preorderTraversal(TreeNode* root) {//一个根结点
        TreeNode*cur = root;
        return t(cur);
    }
}

//https://leetcode.cn/problems/binary-tree-preorder-traversal/description/
