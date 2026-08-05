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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode*count=head;
        int length=0;

        while(count!=NULL){
            length++;
            count=count->next;
        }

        count=head;
        ListNode*prev=NULL;

        if(n==1 and length==1){
            ListNode*del;
            del=head;
            head=del->next;
            delete del;

            return head;
        }

        else if(n==length){
            ListNode*del2;
            del2=count->next;
            delete count;
            return del2;
        }
        else{

            for(int i=1;i<length-n+1;i++){

                
                prev=count;
                count=count->next;

            }
            prev->next=count->next;
            delete count;

        }

        return head;

        
        
    }
};