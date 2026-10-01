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

    TreeNode*bst(vector<int>&ans,int start,int end){

        if(start>end){
            return NULL;
        }
        int mid=start+(end-start)/2;

        TreeNode*temp=new TreeNode(ans[mid]);

        temp->left=bst(ans,start,mid-1);
        temp->right=bst(ans,mid+1,end);
        return temp;
    }
    TreeNode* balanceBST(TreeNode* root) {

        if(!root){
            return NULL;
        }
        
        vector<int>ans;
        inOrder(root,ans);

        sort(ans.begin(),ans.end());

        return bst(ans,0,ans.size()-1);

        
    }
};