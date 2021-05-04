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
    int maxDepth(TreeNode* root) {
        if(root == NULL){
            return 0;
        }
        if(root->left == NULL && root->right==NULL)
            return 1;
        else{
            int ld = INT_MIN;
            int rd = INT_MIN;
            if(root->left)
                ld = maxDepth(root->left);
            if(root->right)
                rd = maxDepth(root->right);
            if(ld < rd)
                return rd+1;
            else
                return ld+1;
        // return max(ld,rd) + 1;
        }
    }
};