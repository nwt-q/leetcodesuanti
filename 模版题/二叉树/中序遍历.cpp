class Solution {
private: 
    void treeNode(TreeNode* node, vector<int>& res){
        if(!node)return;
        treeNode(node->left, res);     // 先处理左子树
        res.emplace_back(node->val);  // 再处理当前节点emplace_back和push_back一样
        treeNode(node->right, res);    // 最后处理右子树
    }

public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        treeNode(root, res);
        return res;
    }
};
