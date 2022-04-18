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
      if(!head||!head->next) return head;
       ListNode* pre=NULL;
      int t=0;
      ListNode* temp=head;
      ListNode* ans=NULL;
      while(true){
        t=0;
        //ListNode* last=NULL;
        while(temp->next&&temp->val==temp->next->val){
         // last=temp;
          temp=temp->next;
          t++;
        }
       // cout<<t<<endl;
        if(t==0){
          if(!pre){
            ans=temp;
            pre=temp;
          }else{
            pre->next=temp;
            pre=pre->next;
          }
        }
        if(!temp->next)break;
        cout<<temp->val<<endl;
          temp=temp->next;
      }
      if(pre)pre->next=NULL;
      return ans;
    }
};