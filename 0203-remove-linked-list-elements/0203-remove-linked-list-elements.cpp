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
    ListNode* removeElements(ListNode* head, int val) {

        if(head==NULL){
            return head;
        }

        ListNode*curr=head;
        ListNode*prev=NULL;

        while(curr!=NULL){

            

            if(curr->val==val && curr==head){

                

                    ListNode*del;
                    del=curr;
                    head=curr->next;
                    curr=curr->next;
                    delete del;
            }
                

            else if(curr->next==NULL && curr->val==val){

                    

                    prev->next=NULL;
                    delete curr;
                    curr=NULL;

            }
            else if(curr->val==val){
                    ListNode*del1;
                    del1=curr;

                    prev->next=curr->next;
                    curr=curr->next;
                    delete del1;
            }
            else{
                prev=curr;
                curr=curr->next;
            }

                
            
        }
        return head;
        
    }
};