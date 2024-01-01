class MyLinkedList {
public:
    //初始化链表
    MyLinkedList() {
        this->size = 0;
        this->head=new ListNode(0);//这个是虚拟结点
    }
    //获取到第index个结点数值,如果index是非法的数值直接返回-1,注意index是从0开始
    int get(int index) {
        if(index<0||index>=size){//判断下标是否合法如果不合法返回-1
            return -1;//什么是合法就是判断的取的值是否在区间内
        }
        ListNode*cur = head;//头结点
        for(int i=0;i<=index;i++){//不断循环到index的结点
            cur = cur->next;
        }
        return cur->val;//返回index下面的值
    }
    
    void addAtHead(int val) {
        addAtIndex(0,val);//既然都是增加结点那么调用我们增加结点的函数就可以
    }
    
    void addAtTail(int val) {
        addAtIndex(size,val);//同理
    }
    //增加结点
    //如果index个节点之前插入新节点,那么新插入的节点为链表的新头节点
    //如果index等于链表的长度,则说明是新插入的节点为链表的尾结点
     //如果index大于链表的长度,则返回为空
    void addAtIndex(int index, int val) {
        if(index>size){//如果索引值越界那么我们直接返回空即可
            return ;
        }
        index = max(0,index); //我们的下标在取最大值防止我们的大小是负数,我们索引也是负数的情况
        size++;//因为我们要增加一个结点所以我们就要将我们的长度加1
        ListNode*pred = head;//创建一个一个指针去移动
        for(int i=0;i<index;i++){
            pred = pred->next;//移动到当前我们索引的位置的前一位
        }
        ListNode*toAdd = new ListNode(val);//然后我们又创建了一个结点去将这给结点增加到我们的要增加的位置
        toAdd->next = pred->next;//我们这个新结点的指针指向下一位是我们当前要插入结点位置的指针指向下一位,
        pred->next = toAdd;//然后将我们索引的位置的前一位指向我们的插入结点
    }
    
    void deleteAtIndex(int index) {//删除结点
        if(index<0||index>=size){
            return ;
        }
        size--;//因为我们删除了元素所以我们的长度要减
        ListNode*pred = head;//我们创建指针去指向我们的结点
        for(int i=0;i<index;i++){//不断将我的结点移动到我们要删除元素的下一位然后退出循环
            pred = pred->next;
        }
        ListNode*p=pred->next;//这个p指向的就是我们要删除的结点
        pred->next = pred->next->next;//我们将结点的指向修改然后删除p指向的结点即可
        delete p;
    }
    private://定义一个私有属性
        int size;
        ListNode*head;
};

//https://leetcode.cn/problems/design-linked-list/discussion/
//真叫人崩溃的一题
