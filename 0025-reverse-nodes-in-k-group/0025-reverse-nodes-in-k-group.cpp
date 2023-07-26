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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* dummy=new ListNode(0);
        ListNode* before=dummy;
        dummy->next=head;
        ListNode* after=head;
        ListNode* curr=NULL;
        ListNode* pre=NULL;
        while(true){
            ListNode* temp=after;
          for(int i=0;i<k;i++){
              if(temp==NULL) return dummy->next;
              temp=temp->next;
          }
           curr=after;
            pre=before;
            for(int i=0;i<k;i++){
                temp=curr->next;
                curr->next=pre;
                pre=curr;
                curr=temp;
            }
            before->next=pre;
            after->next=curr;
            before=after;
            after=curr;
            
        }
        return dummy->next;
    }
};