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

    void level(TreeNode*root,vector<vector<int>>&ans){

        queue<TreeNode*>add;

        add.push(root);

        while(!add.empty()){

            int size=add.size();

            vector<int>arr;

            for(int i=0;i<size;i++){
                
                TreeNode*temp=add.front();
                add.pop();

                arr.push_back(temp->val);

                if(temp->left!=NULL){
                    add.push(temp->left);
                }
                if(temp->right!=NULL){
                    add.push(temp->right);
                }
            }

            ans.push_back(arr);
        }
    }
    vector<vector<int>> levelOrder(TreeNode* root) {

        vector<vector<int>>ans;

        if(root==NULL){
            return ans;
        }

        

        level(root,ans);
        return ans;
        
    }
};