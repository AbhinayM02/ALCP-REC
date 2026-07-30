#include<iostream>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
  };

class Solution {
public:
    bool hasCycle(ListNode *head){
        ListNode *h=head,*t=head;
        while(h!=NULL and h->next!=NULL){
            h = h->next->next;
            t = t->next;
            if(h == t){
                return 1;
            }
        }
        return 0;
    }
};
