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

    TreeNode* increasingBST(TreeNode* root) {

        if(root==NULL){
            return NULL;
        }

        vector<int>ans;
        inOrder(root,ans);

        TreeNode*temp=NULL;
        TreeNode*tail=NULL;

        for(int i=0;i<ans.size();i++){

            if(temp==NULL){
                temp=new TreeNode(ans[i]);
                tail=temp;
            }
            else{
                tail->right=new TreeNode(ans[i]);
                tail=tail->right;
            }

            
        }

        return temp;






        
    }
};