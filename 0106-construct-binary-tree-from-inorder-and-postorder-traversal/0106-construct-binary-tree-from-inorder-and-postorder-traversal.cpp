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
    int find(vector<int>&inorder,int instart,int inend,int target){

        for(int i=instart;i<=inend;i++){
            if(inorder[i]==target){
                return i;
            }
        }
        return -1;
    }
    TreeNode*tree(vector<int>&inorder,vector<int>&postorder,int instart,int inend,int index){

        if(instart>inend){
            return NULL;
        }

        TreeNode*root=new TreeNode(postorder[index]);
        
        int pos=find(inorder,instart,inend,postorder[index]);

        root->right=tree(inorder,postorder,pos+1,inend,index-1);
        root->left=tree(inorder,postorder,instart,pos-1,index-(inend-pos)-1);
        return root;

    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        
        return tree(inorder,postorder,0,inorder.size()-1,postorder.size()-1);
    }
};