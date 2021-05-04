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
    int travel(TreeNode* root, vector<int> &ans){
       if(root == NULL)
           return 0;
        travel(root->left, ans);
        ans.push_back(root->val);
        travel(root->right, ans);
        return 0;
    }
    
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        travel(root,ans);
        return ans;
        
    }
};