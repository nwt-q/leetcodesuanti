#include<bits/stdc++.h>
using namespace std;


typedef struct poly {//定义链表
    int data;
    struct poly* next;
    struct poly*qian;
}LNode;

typedef struct QiDian{
    struct poly* start;
    int size;
} Biao;

void CreateList(Biao *L,int n){
    LNode* xinjiedian = new LNode;
    xinjiedian->data=n;
    xinjiedian->qian=L->start;
    xinjiedian->next=L->start->next;
    L->start->next=xinjiedian;
    xinjiedian->next->qian=xinjiedian;
    L->start=xinjiedian;
    L->size++;
}

void RemoveList(Biao* L,LNode* toRemove){
    toRemove->next->qian=toRemove->qian;
    toRemove->qian->next=toRemove->next;
    //delete toRemove;
    L->size--;
}


int main(){
    int n,m,b,ch[102];
    Biao* start = new Biao;
    start->start=new LNode;
    start->size=1;
    start->start->data=0;
    start->start->qian=start->start;
    start->start->next=start->start;
    cin>>n>>m>>b;

    for(int i=1;i<n;i++){
        CreateList(start,i);
    }   
LNode* cursor = start->start;
    for(int i=0;i<n;i++){
       if(cursor->data==m){
        break;
       }
        cursor=cursor->next;
    }
int ii=1;
while (start->size!=1)
{
    for(int i=1;i<b;i++){
        cursor=cursor->next;
}
RemoveList(start,cursor);
cursor=cursor->next;
}
cursor=cursor->next;
cout<<cursor->data<<endl;

}
