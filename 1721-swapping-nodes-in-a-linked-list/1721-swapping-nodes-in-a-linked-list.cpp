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
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {

        // vector<int>ans;
        // ListNode*curr;
        // curr=head;

        // while(curr!=NULL){

        //     ans.push_back(curr->val);
        //     curr=curr->next;
        // }
        // int first=0;
        // int last=ans.size()-1;

        // for(int i=0;i<k-1;i++){
        //     first++;
        //     last--;
        // }

        // int temp=ans[first];
        // ans[first]=ans[last];
        // ans[last]=temp;

        // curr=head;

        // for(int i=0;i<ans.size();i++){

        //     curr->val=ans[i];
        //     curr=curr->next;
        // }

        // return head;

        // ANOTHER METHOD

        int len=0;
        ListNode*curr=head;

        while(curr!=NULL){
            len++;
            curr=curr->next;
        }

        ListNode*first=head;
        ListNode*last=head;

        for(int i=0;i<k-1;i++){
            first=first->next;
        }

        for(int j=0;j<len-k;j++){
            last=last->next;
        }

        int temp=first->val;
        first->val=last->val;
        last->val=temp;

        return head;
        
    }
};