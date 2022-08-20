/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    unordered_map<Node*,Node*>m;
    Node* copyRandomList(Node* head) {
        Node* dummy=new Node(-1);
        Node* temp=dummy;
        Node* head1=head;
        while(head){
            temp->next=new Node(head->val);
            temp=temp->next;
            temp->random=head->random;
            m[head]=temp;
            head=head->next;
        }
        head=head1;
        temp=dummy->next;
        while(head){
            temp->random=m[head->random];
            head=head->next;
            temp=temp->next;
        }
        return dummy->next;
    }
};