class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        int c=1;
        ListNode* temp=head;
        stack<int>s;
        while(temp)
        {
            if(c>=left&&c<=right)
            {
                s.push(temp->val);
            }
            c++;
            temp=temp->next;
        }
        temp=head;
        c=1;
         while(temp)
        {
            if(c>=left&&c<=right)
            {
                temp->val=s.top();
                s.pop();
            }
            c++;
            temp=temp->next;
        }
        return head;
        
    }
};