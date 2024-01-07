class Solution {
    bool flag = true;
    int maxHeight(TreeNode* root) {
        if(root == NULL ) return 1;
        if(root->left == NULL and root->right == NULL) return 2;
        int lh = maxHeight(root->left);
        int rh = maxHeight(root->right);
        if(lh == 0 or rh == 0 or abs(lh-rh)>1) return 0;
        return max(lh,rh) + 1;
    }
public:
    bool isBalanced(TreeNode* root) {
        return maxHeight(root);
    }
};