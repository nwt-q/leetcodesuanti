
  Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        struct ListNode list3;
        struct ListNode* s= &list3;
        struct ListNode* p= list1;
        struct ListNode* q= list2;
        while(p!=NULL&&q!=NULL){
            if(p->val < q->val){
                s->next=p;
                p=p->next;
            }else{
                s->next=q;
                q=q->next;
            }
            s=s->next;
        }
        s->next = (p!=NULL) ? p:q;
        return list3.next;
    }
};
