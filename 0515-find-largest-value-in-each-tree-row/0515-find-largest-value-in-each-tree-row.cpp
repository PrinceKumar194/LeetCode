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
    vector<int> largestValues(TreeNode* root) {

        vector<int>ans;
        if(!root){
            return ans;
        }

        queue<TreeNode*>add;
        add.push(root);
        while(!add.empty()){

            int size=add.size();
            int max=INT_MIN;

            for(int i=0;i<size;i++){
                TreeNode*temp=add.front();
                add.pop();

                if(temp->val>max){
                    max=temp->val;
                }

                if(temp->left){
                    add.push(temp->left);
                }
                if(temp->right){
                    add.push(temp->right);
                }
            }

            ans.push_back(max);
        }

        return ans;
        
    }
};