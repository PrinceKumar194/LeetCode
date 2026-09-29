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
    // METHOD 2

    // void InOrder(TreeNode*root,vector<int>&ans){
    //     if(!root){
    //         return;
    //     }

    //     InOrder(root->left,ans);
    //     ans.push_back(root->val);
    //     InOrder(root->right,ans);
    // }

    void small(TreeNode*root,int&k,int&ans){

        if(!root){
            return;
        }

        small(root->left,k,ans);

        if(k!=0){
            k--;
            ans=root->val;
        }
        small(root->right,k,ans);
    }
    int kthSmallest(TreeNode* root, int k) {
        // METHOD 1

        // if(!root){
        //     return 0;
        // }

        // vector<int>ans;
        // InOrder(root,ans);

        // return ans[k-1];

        int ans=0;
        if(!root){
            return ans;
        }
        small(root,k,ans);

        return ans;
    }
};