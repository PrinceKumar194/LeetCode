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
    vector<double> averageOfLevels(TreeNode* root) {

        vector<double>ans;
        if(root==NULL){
            return ans;
        }
        queue<TreeNode*>add;
        add.push(root);

        while(!add.empty()){

            int size=add.size();

            double sum=0;

            for(int i=0;i<size;i++){
                TreeNode*temp=add.front();
                add.pop();
                sum+=temp->val;

                if(temp->left){
                    add.push(temp->left);
                }
                if(temp->right){
                    add.push(temp->right);
                }

            }

            double avg=sum/size;

            ans.push_back(avg);
        }

        return ans;
        
    }
};