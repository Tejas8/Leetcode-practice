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
        if(!head||k==0) return head;
        int len=0;
        ListNode* last=NULL;
        ListNode* bet=NULL;
        ListNode* temp=head;
        while(temp){
            if(!temp->next) last=temp;
            len++;
            temp=temp->next;
        }
        k=k%len;
        if(k==0) return head;
        int count=len-k;
        temp=head;
        last->next=head;
        for(int i=0;i<count;i++){
            head=temp;
            temp=temp->next;
        }
        head->next=NULL;
        return temp;
    }
};