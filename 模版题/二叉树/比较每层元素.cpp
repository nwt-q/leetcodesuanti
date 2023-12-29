class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        queue<TreeNode*>que;
        if(root != nullptr) que.push(root);
        vector<vector<int>>ans;
        while(!que.empty()) {
            int size = que.size();
            vector<int>vec;
            for(int i = 0;i < size;i++) {
                TreeNode*cur = que.front();
                que.pop();
                vec.push_back(cur->val);
                if(cur->right) que.push(cur->right);
                if(cur->left) que.push(cur->left);
            }
            ans.push_back(vec);
        }
        for(auto i : ans) {
            for(int j=0,k=i.size()-1;j < i.size()/2;j++,k--){
                if(i[j]!=i[k]) {
                    return 0;
                }
            }
        }
        return 1;
    }
};
