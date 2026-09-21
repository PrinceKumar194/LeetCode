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
    vector<int> rightSideView(TreeNode* root) {

        vector<int>ans;

        if(root==NULL){
            return ans;
        }

        queue<TreeNode*>add;

        add.push(root);
        TreeNode*temp;

        while(!add.empty()){

            int size=add.size();
            ans.push_back(add.front()->val);

            for(int i=0;i<size;i++){

                temp=add.front();
                add.pop();

                if(temp->right!=NULL){
                    add.push(temp->right);
                }

                if(temp->left!=NULL){
                    add.push(temp->left);
                }

            }
        }
        
        return ans;
    }
};