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
class comp{
    public:
    bool operator()(ListNode* a,ListNode* b){
        if(a->val>b->val)return true;
        return false;
    }
};
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size()==0) return NULL;
priority_queue<ListNode*,vector<ListNode*>,comp>pq;
        ListNode* dummy=new ListNode(1);
       ListNode* res=dummy;
     
        for(auto i:lists){
            if(i!=NULL){
            pq.push(i);
            }
        }
        while(!pq.empty()){
            ListNode* temp=pq.top();
            
            pq.pop();
            dummy->next=temp;
            if(temp&&temp->next!=NULL){
            pq.push(temp->next);
                temp->next=NULL;
            }
            
            dummy=dummy->next;
        }
        return res->next;
    }
};