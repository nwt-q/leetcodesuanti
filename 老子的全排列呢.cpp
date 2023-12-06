#include<bits/stdc++.h>
using namespace std;

int main()
{
	int p[9]={1,2,3,4,5,6,7,8};
	do{
		for(int i=0;i<8;i++)
		{
			if(i!=7)
			{
				cout<<p[i]<<" ";
			}
			else
				cout<<p[i]<<"\n";
		}
	}
	while(next_permutation(p,p+8));
	return 0;
}
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int QAQ[9]={1,2,3,4,5,6,7,8};
//     do{
//         for(int i=0;i<8;i++){
//             cout<<QAQ[i]<<" ";
//         }
//         cout<<"\n";
//     }
//     while(next_permutation(QAQ,QAQ+8));
// }