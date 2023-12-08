#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


struct Node
{
	Node *prev;
	int ant;
	Node *next;
};

Node *x;//创建一个全局变量

// 这么样初始化节点
void init(void)
{
	x = new Node;
	x->next = x;//将x的后继指向自己
	x->prev = x; //将x的前驱指向自己
}
// 创建节点将节点插入
void intset(int num) //传入一个可以插入的数据
{
	Node *y = new Node;  //创建一个新节点
	y->ant = num;   //将我们创建的节点的数据域存储num
	x->prev->next=y;
	y->prev=x->prev;
	y->next=x;
	x->prev=y;
	// y->next = x->next; //标准的双向链表插入//回到第一个元素
	// x->next->prev = y; //将x的前驱的后继指向我们新创建的节点
	// x->next->next = y; //x的后继变成y
	// y->prev = x;  //y的前驱变成x
	// //这里的x是我们创建的全局变量所以少一个参数的传递
}
// 删除节点
void deletew(Node *y)
{
	if (y->next != y->prev) //当x的后继不为空??//应该是x的后继不为x因为是双向链表?中不是循环链表吗?
	{
		
		y->prev->next = y->next;
		y->next->prev = y->prev;
		delete y;
	}
}
//删除第一个节点
void deleteFist(Node *x)
{
	deletew(x->next); //删除X的后继
}

void deleteLast(Node *x)
{
	deletew(x->prev); //删除x的前驱
}

Node*search(int num){
	Node*cur=x->next;
	while(1){
		if(cur==x) break;
		if(cur->ant==num){
			return cur;
		}else{
			cur = cur->next;
		}
	}
	return  NULL;
}


// 双向链表实现:
int main()
{
	stack<int>dp;
	int num, n, i;
	int size = 0;
	string s;
	int np = 0, nd = 0;
	cin>>n; //输入数据的大小要循环多少次
	init();//初始化链表
	// inline char &std::string::operator[](std::size_t __pos)
	for (i = 0; i < n; i++) //输入数据
	{
		cin>>s>>num; 
		if (s[0] == 'i')
		{
			intset(num);  //将num插入到链表中
			np++;
			size++; //统计链表大小
		}
		else if (s[0] == 'd') //当输入为d
		{
			if (s.size() > 6)
			{
				if (s[6] == 'F'){//当输入为'F'
					deleteFist(x); //删除节点
				}
				else if (s[6] == 'L'){
					deleteLast(x);
				}
			}
			else
			{
				deletew(search(num));  //如果条件都不满足删除x
				nd++;
			}
			size--;
		}
	}
	Node *cur = x->next;
	int isf = 0;
	while (1)
	{
		if (cur==x) break;
		if ( isf++ > 0 ) printf(" ");
		dp.push(cur->ant);
		// printf("%d",cur->ant);
		cur = cur->next;
	}
for(int i=0;i<=dp.size()+1;i++){
	cout<<dp.top()<<" ";
	dp.pop();
}
	printf("\n");
}
