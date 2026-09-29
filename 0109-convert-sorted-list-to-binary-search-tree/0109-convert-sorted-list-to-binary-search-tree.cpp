/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    void arr(ListNode*head,vector<int>&ans){

        ListNode*temp=head;

        while(temp!=NULL){
            ans.push_back(temp->val);
            temp=temp->next;
        }
    }

    TreeNode*Bst(vector<int>&ans,int start,int end){

        if(start>end){
            return NULL;
        }

        int mid=start+(end-start)/2;

        TreeNode*temp=new TreeNode(ans[mid]);

        temp->left=Bst(ans,start,mid-1);
        temp->right=Bst(ans,mid+1,end);
        return temp;
    }
    TreeNode* sortedListToBST(ListNode* head) {
        
        vector<int>ans;

        if(!head){
            return NULL;
        }

        arr(head,ans);

        return Bst(ans,0,ans.size()-1);
    }
};