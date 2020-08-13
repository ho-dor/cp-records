class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int ans = 0;
        depth(root, ans);
        return ans;
    }
private:
    int depth(TreeNode* root, int& dia) {
        if(!root) return 0;
        int left = depth(root->left, dia);
        int right = depth(root->right, dia);
        dia = max(dia, left + right);
        return max(left, right) + 1;
    }
};