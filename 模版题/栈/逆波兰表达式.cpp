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
    // if(s==nullptr||s->top==(-1)){
    //     return 1;
    // }else{
    //     return 0;
    // }
    return s->top == -1;
}

int pop(S *s,elemtype*x){//输入的是地址
    // if(Emptystack(s)){//如果栈为空//注意传参数形式
    //    cerr << "Stack is full\n"; 
    //    return 0;
    // }else{
    //     s->top--;
    //     return 1;
    // }
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
        // if(Emptystack(p)){
        //     p->data[p->top++] = atoi(q);
        // }
        if(s[0]=='+'||s[0]=='-'||s[0]=='*'||s[0]=='/'){
            // int num1=p->data[p->top--];
            // int num2=p->data[p->top--];
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
        // int m=0;
        // for(int i=0;i<s.size();i++){
        //     m+=(int)s[i];
        // }
            Push(p,atoi(s));//入栈
        }//不断循环最后剩下结果
    }
    int num=0;
    pop(p,&num);
    cout<<num;//输出结果
    delete p;//释放空间
    return 0;
}

// // //... (The rest of your code remains unchanged)  
  
// // // int main(){    
// // //     S* p = new S; // Allocate memory for p    
// // //     Init(p); // Initialize stack    
// // //     char s;    
// // //     while(scanf("%c", &s)){ // Read the input character    
// // //         if(isdigit(s)){  
// // //             s -= '0'; // Convert the character to an integer  
// // //             if(!Push(p, s)){  
// // //                 cerr << "Stack is full\n";  
// // //                 break;  
// // //             }  
// // //         }  
// // //         else{  
// // //             if(Emptystack(p)){  
// // //                 cerr << "Invalid expression\n";  
// // //                 break;  
// // //             }  
// // //             int num2 = Gettop(p);  
// // //             if(!pop(p)){  
// // //                 cerr << "Stack is empty\n";  
// // //                 break;  
// // //             }  
// // //             int num1 = Gettop(p);  
// // //             if(!pop(p)){  
// // //                 cerr << "Stack is empty\n";  
// // //                 break;  
// // //             }  
// // //             switch(s){  
// // //             case '+': Push(p, num1+num2); break;  
// // //             case '-': Push(p, num1-num2); break;  
// // //             case '*': Push(p, num1*num2); break;  
// // //             case '/':   
// // //                 if(num2 != 0)  
// // //                     Push(p, num1/num2);   
// // //                 else {  
// // //                     cerr << "Division by zero\n";  
// // //                     break;  
// // //                 }  
// // //             }  
// // //         }   
// // //     }    
// // //     if (!Emptystack(p)) {    
// // //         cerr << "Invalid expression\n";    
// // //     } else {    
// // //         elemtype result = Gettop(p);    
// // //         cout << result << endl; // Print the result    
// // //     }    
// // //     delete p; // Don't forget to deallocate memory    
// // //     return 0;    
// // // }

// #include <bits/stdc++.h>
// #define MAX 1000
// using namespace std;

// typedef int elemtype;

// typedef struct {
//     elemtype data[MAX];
//     int top;
// }S;

// void Init(S **s){
//     *s = new S;
//     (*s)->top=-1;
// }

// int Push(S* s, elemtype x){
//     if(s->top == MAX-1)
//         return 0;
//     else{
//         s->data[++(s->top)] = x;
//         return 1;
//     }
// }

// int Emptystack(S* s){
//     return s->top == -1;
// }

// int pop(S *s, elemtype *x){
//     if(Emptystack(s)){
//        cerr << "Stack is empty\n"; 
//        return 0;
//     }else{
//         *x = s->data[(s->top)--];
//         return 1;
//     }
// }

// int main(){
//     char str[10];
//     S* p;
//     Init(&p);
//     while(scanf("%s", str) != EOF){
//         if(str[0] == '+' || str[0] == '-' || str[0] == '*' || str[0] == '/'){
//             int num1, num2;
//             pop(p, &num2);
//             pop(p, &num1);
//             switch(str[0]){
//             case '+':
//                 Push(p, num1 + num2);
//                 break;
//             case '-':
//                 Push(p, num1 - num2);
//                 break;
//             case '*':
//                 Push(p, num1 * num2);
//                 break;
//             case '/':
//                 if(num2 != 0)
//                     Push(p, num1 / num2);
//                 else
//                     cerr << "Divide by zero error\n";
//                 break;
//             }
//         }else{
//             Push(p, atoi(str));
//         }
//     }
//     int result;
//     pop(p, &result);
//     cout << result;
//     delete p;
//     return 0;
// }
