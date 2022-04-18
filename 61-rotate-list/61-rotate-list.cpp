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
    ListNode* rotateRight(ListNode* head, int k) {
      if(!head||!head->next)return head;
        ListNode* last=head;
      ListNode* first=head;
      ListNode* pre=NULL;
      int n=0;
      while(first){
        n++;
        pre=first;
        first=first->next;
      }
      first=head;
      k=k%n;
      k=n-k-1;
      while(k--){
        last=last->next;
      }
      pre->next=head;
      head=last->next;
      last->next=NULL;
      return head;
    }
};