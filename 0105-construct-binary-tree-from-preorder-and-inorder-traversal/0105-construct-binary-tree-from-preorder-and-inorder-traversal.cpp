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
    int find(vector<int>inorder,int instart,int inend,int target){

        for(int i=instart;i<=inend;i++){
            if(inorder[i]==target){
                return i;
            }
        }
        return -1;
    }
    TreeNode*tree(vector<int>&preorder,vector<int>&inorder,int instart,int inend,int index){

        if(instart>inend){
            return NULL;
        }
        TreeNode*root=new TreeNode(preorder[index]);

        int pos=find(inorder,instart,inend,preorder[index]);

        root->left=tree(preorder,inorder,instart,pos-1,index+1);
        root->right=tree(preorder,inorder,pos+1,inend,index+(pos-instart)+1);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        
 
 
        return tree(preorder,inorder,0,inorder.size()-1,0);
};  };