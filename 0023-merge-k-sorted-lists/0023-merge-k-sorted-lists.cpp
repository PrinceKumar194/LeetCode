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

    ListNode*List(vector<int>&ans){
        ListNode*temp=NULL;
        ListNode*tail=NULL;

        for(int i=0;i<ans.size();i++){

            if(temp==NULL){
                temp=new ListNode(ans[i]);
                tail=temp;
            }
            else{
                tail->next=new ListNode(ans[i]);
                tail=tail->next;
            }
        }

        return temp;
    }
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {

        if(lists.empty()){
            return NULL;
        }

        vector<int>ans;

        for(int i=0;i<lists.size();i++){

            ListNode*temp=lists[i];

            while(temp!=NULL){
                ans.push_back(temp->val);
                temp=temp->next;
            }
        }

        sort(ans.begin(),ans.end());

        return List(ans);
        
    }
};