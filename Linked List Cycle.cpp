class Solution {
public:
    bool hasCycle(ListNode *head){
        ListNode *h=head,*t=head;
        while(h!=NULL && h->next!=NULL){
            h = h->next->next;
            t = t->next;
            if(h == t){
                return 1;
            }
        }
        return 0;
    }
};
