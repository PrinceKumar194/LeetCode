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
    bool isEvenOddTree(TreeNode* root) {

        if(!root){
            return 0;
        }
        
        queue<TreeNode*>add;
        add.push(root);
        int level=0;

        while(!add.empty()){

            int size=add.size();
            vector<int>ans;

            for(int i=0;i<size;i++){

                TreeNode*temp=add.front();
                add.pop();
                ans.push_back(temp->val);

                if(temp->left){
                    add.push(temp->left);
                }
                if(temp->right){
                    add.push(temp->right);
                }

            }

            if(level%2==0){
                for(int i=0;i<size;i++){

                    if(ans[i]%2==0){
                        return 0;
                    }

                    if((i>0 && ans[i]<=ans[i-1])){
                        return 0;
                    }
                }
            }
            else{

                for(int i=0;i<size;i++){

                    if(ans[i]%2!=0){
                        return 0;
                    }

                    if((i>0&&ans[i]>=ans[i-1])){
                        return 0;
                    }
                }
            }
            level++;
            
        }
        return 1;
    }
};