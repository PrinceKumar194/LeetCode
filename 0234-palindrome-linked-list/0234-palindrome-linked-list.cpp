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
    bool isPalindrome(ListNode* head) {
        
        ListNode*temp=head;
        int count=0;

        while(temp!=NULL){
            count++;
            temp=temp->next;
        }

        if(count==1){
            return 1;
        }

        count=count/2;
        int length=count;

        ListNode*curr=head;
        ListNode*prev=NULL;


        while(count--){

            prev=curr;
            curr=curr->next;
        }

        prev->next=NULL;

        

        // reverse half node

        prev=NULL;

        ListNode*fut=NULL;

        while(curr!=NULL){

            fut=curr->next;
            curr->next=prev;
            prev=curr;
            curr=fut;

        }
        ListNode*head2=prev;

        while(length--){

            if(head->val!=head2->val){
                return 0;
            }

            head=head->next;
            head2=head2->next;
        }
        return 1;
    }
};