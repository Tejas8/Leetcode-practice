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
        if(!head||!head->next||k==0) return head;
        int n=0;
        ListNode* temp=head;
        ListNode* pre=NULL;
        ListNode* newNode=NULL;
        while(temp){
            n++;
            temp=temp->next;
        }
         if(k==n) return head;
        if(k>=n){
            k=k%n;
        }
       if(k==0) return head;
        int i=n-k;
        temp=head;
        while(i--){
            pre=temp;
            temp=temp->next;
        }

        pre->next=NULL;
        
        newNode=temp;
        while(temp){
            pre=temp;
            temp=temp->next;
        }
        pre->next=head;
        return newNode;
    }
};