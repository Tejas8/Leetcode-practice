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
    ListNode* oddEvenList(ListNode* head) {
        if(!head || (head && !head->next) || (head && head->next &&!head->next->next)) return  head;
        ListNode* ans=head;
        ListNode* head1=head;
        ListNode* head2=head->next;
        ListNode* temp=head2;
        ListNode* pre1=NULL;
        while(head1 && head2){
            head1->next=head2->next;
            pre1=head1;
            head1=head1->next;
          if(head1){ 
            head2 ->next=head1->next;
            head2=head2->next;
           }
        }
        if(head1){
            head1->next=temp;
        }else{
            pre1->next=temp;
        }
        return ans;
        
    }
};