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
    void minDst(TreeNode*root,int&prev,int&ans){

        if(!root){
            return;
        }

        minDst(root->left,prev,ans);

        if(prev!=INT_MIN){

            ans=min(ans,root->val-prev);
        }
        prev=root->val;

        minDst(root->right,prev,ans);

    }
    int getMinimumDifference(TreeNode* root) {

        if(!root){
            return 0;
        }

        int ans=INT_MAX;
        int prev=INT_MIN;

        minDst(root,prev,ans);

        return ans;
        
        
    }
};