class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* you= headA;
        ListNode* me= headB;
        // 在遇到你之前,我们是俩条平行线,以外不会相遇
        if (you == nullptr || me == nullptr) 
            return nullptr;
        // 兜兜转转,我们的生命轨迹终将出现交点
        while(me!=you){
            // 我们携手与共,即使一个人掉队,也会拉上彼此继续前行
            you = you == nullptr ? headB : you->next;
            me = me == nullptr ? headA : me->next;
            // 往后余生,你就是我的世界
        }
        return you;
        ////即使身处两个世界，但只要以相同的速度双向奔赴，就一定会相遇。
        //两人同时以相同的速度走自己的路，走完自己的路之后走对方的路，两者有缘则相遇，
        //相遇则结束长跑，若无缘则同时走到“空”，跳出感情的死循环。
    }
};
