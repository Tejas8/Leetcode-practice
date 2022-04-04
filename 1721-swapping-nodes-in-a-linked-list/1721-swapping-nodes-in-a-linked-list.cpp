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
        ListNode* temp=head;
      int size=0;
      while(temp){
        size++;
        temp=temp->next;
      }
      int cnt=0;
      temp=head;
      ListNode* first=NULL;
      ListNode* second=NULL;
      while(temp){
        ++cnt;
        if(cnt==k) first=temp;
        if(cnt==(size-k+1)) second=temp;
        temp=temp->next;
      }
      int val=first->val;
      first->val=second->val;
      second->val=val;
      return head;
    }
};