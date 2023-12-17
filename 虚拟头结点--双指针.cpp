class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode*fast = head;
        ListNode*slow = head;
        //我们彼此相识共同进步
        while(fast!=nullptr&&fast->next!=nullptr){
            //即使身处两个世界，以不相同的速度双向奔赴,但只要在同一恋爱循环中，就一定会相遇。
            slow = slow->next;
            fast = fast->next->next;
            //在命运的某一时刻我们登入的婚姻的殿堂
            if(slow==fast){
                //在我们相遇的哪个时刻脑中回忆着过往
                ListNode*cnt = slow; 
                ListNode*cur = head;
                while(cur!=cnt){
                    //从相识到相知彼此断靠近
                    cur=cur->next;
                    cnt = cnt->next;
                }
                //直到回忆道我们的青涩告白返回我们当初最真挚的情感
                return cur;
            }
        }
        //尽管我们没有进入恋爱的循环我们都有着彼此的故事
        return nullptr;
    }
};
//https://leetcode.cn/problems/linked-list-cycle-ii/description/
