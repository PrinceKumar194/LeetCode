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

        stack<TreeNode*>r_to_l;
        stack<TreeNode*>l_to_r;
        l_to_r.push(root);
        TreeNode*temp;

        while(!l_to_r.empty() || !r_to_l.empty()){

            // LEFT TO RIGHT
            vector<int>arr;
            vector<int>brr;

            while(!l_to_r.empty()){

        

                temp=l_to_r.top();
                l_to_r.pop();

                arr.push_back(temp->val);

                if(temp->left!=NULL){

                    r_to_l.push(temp->left);
                }
                if(temp->right!=NULL){
                    r_to_l.push(temp->right);
                }
            }

            if(!arr.empty()){
                ans.push_back(arr);
            }

            // RIGHT TO LEFT

            while(!r_to_l.empty()){


                temp=r_to_l.top();
                r_to_l.pop();

                brr.push_back(temp->val);

                if(temp->right!=NULL){
                    l_to_r.push(temp->right);
                }

                if(temp->left!=NULL){
                    l_to_r.push(temp->left);
                }
            }

            if(!brr.empty()){
                ans.push_back(brr);
            }


        }
        
    }
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {

        vector<vector<int>>ans;

        if(root==NULL){
            return ans;
        }
        
        

        level(root,ans);

        return ans;
    }
};