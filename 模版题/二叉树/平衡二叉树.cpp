class Solution {
public:
    //返回该节点为根节点的二叉树的高度,如果不是平衡二叉树了则返回-1
    int getHeigth(TreeNode* node) {
        if (node == nullptr) return 0;
        int leftHeight = getHeigth(node->left);
        if(leftHeight == -1) return -1;
        int rightHeight = getHeigth(node->right);
        if(rightHeight == -1) return -1;
        return abs(leftHeight - rightHeight) > 1 ? -1 : 1+ max(leftHeight,rightHeight);
    }
    bool isBalanced(TreeNode* root) {
        return getHeigth(root) == -1 ? false : true;
    }
};

//https://leetcode.cn/problems/balanced-binary-tree/submissions/
