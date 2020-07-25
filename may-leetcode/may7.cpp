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
    
    int dfs(TreeNode* root, int x, int level){
        
        if(!root)
            return 0;
        
        if(root->val==x)
            return level;
        
        int lval =  dfs(root->left,x,level+1);
        
        if(lval!=0)
            return lval;
        
        lval = dfs(root->right,x,level+1);
        
        return lval;
        
    }
    
    int height(TreeNode* root,int x){
        
        return  dfs(root,x,0);
        
    }
    
    TreeNode* parent(TreeNode* root, int x){
        
        if(!root)
            return NULL;
        
        if(root->left){
            
             if((root->left)->val==x){
                    return root;
                }
            
        }
            
       
        if(root->right){
            
             if((root->right)->val==x){
                 return root;
             }
        
        }
       
        
        TreeNode* lroot = parent(root->left,x);
        
        if(lroot!=NULL)
            return lroot;
        
        TreeNode* rroot = parent(root->right,x);
        return rroot;
    }
    
    bool isCousins(TreeNode* root, int x, int y) {
        
        if(x==y)
            return false;
        
        int h1 = height(root,x);
        int h2 = height(root,y);
        
        if(h1!=h2)
            return false;
        
        TreeNode* p1 = parent(root,x);
        TreeNode* p2 = parent(root,y);
        
        if(p1==p2)
            return false;
        
        return true;
        
    }
};