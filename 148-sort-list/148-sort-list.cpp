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
  ListNode* flip(ListNode* head){
    ListNode* slow=head;
    ListNode* fast=head->next;
    while(fast){
      fast=fast->next;
      if(fast){
        slow=slow->next;
        fast=fast->next;
      }
    }
    fast= slow->next;
    slow->next=NULL;
    return fast;
  }
  ListNode* merge(ListNode* a,ListNode* b){
    if(!a&&!b)return NULL;
    ListNode* temp=NULL;
    
    if(!b) return a;
    else if(!a) return b;
    
      if(a->val<b->val)
      {
        temp=a;
      temp->next=merge(a->next,b);
    }else{
      temp=b;
      temp->next=merge(a,b->next);
    }
    return temp;
  
  }
    ListNode* sortList(ListNode* head) {
        if(!head||!head->next)return head;
      ListNode* first=head;
      ListNode* second=flip(head);
      ListNode* a=sortList(first);
      ListNode* b=sortList(second);
      return merge(a,b);
    }
};