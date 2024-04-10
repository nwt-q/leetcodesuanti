#include <bits/stdc++.h>
#define MAX 1000
using namespace std;

typedef int elemtype;

typedef struct {
    elemtype data[MAX];
    int top;
}S;

void Init(S **s){
    *s = new S;//要创建一个栈
    (*s)->top=-1;//初始化栈
}

int Push(S*s,elemtype x){//入栈
    if(s->top == MAX-1)//到栈顶
        return 0;
    else{
        // s->top++;//栈中top定位加1
        s->data[++(s->top)] = x;//将x的值存储在栈顶
        return 1;
    }
}

int Emptystack(S*s){//判断栈是否为空
    return s->top == -1;
}

int pop(S *s,elemtype*x){//输入的是地址
    if(Emptystack(s)){
        // cerr <<"Stack ....\n";//为空
        return 0;
    }else{
        *x = s->data[(s->top)--];
        return 1;
    }
}

elemtype Gettop(const S* s){//取栈顶元素
    if(s->top==-1){//到底部
        return 1;
    }
    else{
        return s->data[s->top];
    }
}


int main(){
    char s[10];//直接转字符串
    S*p;//定义栈名
    Init(&p);//创建栈
    char*q= &s[0];
    while(scanf("%s",q)!=EOF){
        if(s[0]=='+'||s[0]=='-'||s[0]=='*'||s[0]=='/'){
            int num1,num2;
            pop(p,&num2);//出栈将栈顶元素存储在num2中
            pop(p,&num1);//将下一元素存储在num1中
            switch(s[0]){
            case '+':
                Push(p, num1 + num2);
                break;
            case '-':
                Push(p, num1 - num2);
                break;
            case '*':
                Push(p, num1 * num2);
                break;
            case '/':
               Push(p, num1 / num2);
                break;
            }
        }else{//不满足运算符
            Push(p,atoi(s));//入栈
        }//不断循环最后剩下结果
    }
    int num=0;
    pop(p,&num);
    cout<<num;//输出结果
    delete p;//释放空间
    return 0;
}
