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
    int insertVal;
    void dfs(TreeNode * root){
        if(root == nullptr){
            root = new TreeNode(insertVal);
            return;
        }
        if(root->val > insertVal){
            if(root->left == nullptr){
                root->left = new TreeNode(insertVal);
                return;
            }
            dfs(root->left);
        }
        else{
            if(root->right == nullptr){
                root->right = new TreeNode(insertVal);
                return;
            }
            dfs(root->right);
        }
        
    }
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root == nullptr){
            root = new TreeNode(val);
            return root;
        }
        insertVal = val;
        dfs(root);
        return root;
    }
};