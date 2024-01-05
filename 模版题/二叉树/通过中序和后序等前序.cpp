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
    TreeNode*traversal (vector<int>& inorder,vector<int>& postorder) {
        if (postorder.size() == 0) return NULL;
        int rootValue = postorder[postorder.size()-1];
        TreeNode* root =  new TreeNode(rootValue);//找到中间节点
        //叶子节点
        if(postorder.size() == 1) return root;
        //找到中序遍历的切割点
        int delimiterIndex;
       for ( delimiterIndex = 0;delimiterIndex < inorder.size();delimiterIndex++) {
           if (inorder[delimiterIndex] == rootValue) break;
       }
       vector<int> leftnorder(inorder.begin(),inorder.begin()+delimiterIndex);
       vector<int> rightInorder(inorder.begin()+delimiterIndex+1,inorder.end());
       //postorder 舍弃末尾元素
       postorder.resize(postorder.size()-1);
       vector<int> leftPostorder(postorder.begin(),postorder.begin()+leftnorder.size());
       vector<int> rightPostorder(postorder.begin() + leftnorder.size(),postorder.end());

       root->left = traversal(leftnorder,leftPostorder);
       root ->right = traversal(rightInorder,rightPostorder);

       return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        if(inorder.size() == 0 || postorder.size() == 0) return NULL;
        return traversal(inorder,postorder);
    }
};
//https://leetcode.cn/problems/construct-binary-tree-from-inorder-and-postorder-traversal/
