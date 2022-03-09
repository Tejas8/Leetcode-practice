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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp=head;
     //   ListNode*p=head->next;
      ListNode*dummy=new ListNode();
        ListNode* prev=dummy;
        dummy->next=head;
        while(temp!=NULL)
        {
            while(temp->next!=NULL&&temp->val==temp->next->val)
            {
                temp=temp->next;
            }
            if(prev->next==temp)
            {
                prev=prev->next;
            }
            else
            {
                prev->next=temp->next;
            }
            temp=temp->next;
        }
        head=dummy->next;
        return dummy->next;
    }
};