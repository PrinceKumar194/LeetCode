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
    void add(TreeNode*root,int&sum){

        queue<TreeNode*>add;
        TreeNode*temp;
        add.push(root);

        while(!add.empty()){

            temp=add.front();
            add.pop();

            

            if(temp->left){

                if(!temp->left->left && !temp->left->right){
                    sum+=temp->left->val;
                }
              add.push(temp->left);
            }

            if(temp->right){
                add.push(temp->right);
            }

        }
    }
    int sumOfLeftLeaves(TreeNode* root) {

        if(root==NULL || (root->left==NULL && root->right==NULL)){
            return 0;
        }

        int sum=0;

        add(root,sum);

        return sum;

        
        
    }
};