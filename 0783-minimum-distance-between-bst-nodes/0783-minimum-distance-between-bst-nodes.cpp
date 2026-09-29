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
    void inOrder(TreeNode*root,vector<int>&ans){
        if(!root){
            return;
        }

        inOrder(root->left,ans);
        ans.push_back(root->val);
        inOrder(root->right,ans);
    }
    int minDiffInBST(TreeNode* root) {

        if(root==NULL){
            return 0;
        }
        
        vector<int>ans;
        vector<int>ans1;
        inOrder(root,ans);

        for(int i=1;i<ans.size();i++){
            ans1.push_back(ans[i]-ans[i-1]);
        }
        int min=*min_element(ans1.begin(),ans1.end());
        return min;
    }
};