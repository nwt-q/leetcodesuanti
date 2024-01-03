class Solution {
public:
    int sum =1;
    int all =1;
    int getHeight(TreeNode* node,TreeNode* Node) {
        if(node == nullptr&& Node != nullptr) return -1;
        if(node != nullptr&& Node == nullptr) return -1;
        if(node == nullptr&&Node == nullptr) return 0;
        if(node->val != Node->val) return -1;
        int leftHeight = getHeight(node->left,Node->left);
        cout<<leftHeight<<" l  "<< sum++<<"\n";
        if(leftHeight == -1) return -1;
        int rightHeight = getHeight(node->right,Node->right);
        cout<<rightHeight<<" r  "<< all++<<"\n";
        if(rightHeight == -1) return -1;
        return abs(leftHeight - rightHeight) > 1 ? -1 : 1 + max(leftHeight,rightHeight);
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        return getHeight(p,q)!=-1;
    }
};
