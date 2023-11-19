#include<bits/stdc++.h>
using namespace std;
//A=65 B=66
int main(){
    int n;
    cin>>n;
    // cout<<((int)n);
    while(n--){
        int m,o,g=0,h=0;
        int count=0;
        string s;
        cin>>m>>o;
        cin>>s;
        for(int i=0;i<s.size();i++){
            g += (int)(s[i]);
        }
        for(int i=0;i<s.size();i++){
            if(s[i]=='B'){
                count++;
            }
        }
        h=((m-o)*65)+(o*66);
        // cout<<"\n"<<h<<"\n"<<g<<"\n"<<"\n";
        if(h==g){
            cout<<"0"<<"\n";
        }else{
            if(count>o){
                if(s[0]=='B'){
                if(g==(o*66)&&o!=0){
                    cout<<(abs(g-h))<<" "<<"A"<<"\n";
                }else{
                    cout<<(abs(g-h)+1)<<" "<<"A"<<"\n";
                }
                }else{
                    cout<<(abs(g-h))<<" "<<"A"<<"\n";
                }
                
            }else{
                if(s[0]=='A'){
                if(g==((m-o)*65)&&(m-o)!=0){
                    cout<<(abs(g-h))<<" "<<"B"<<"\n";
                }else{
                    cout<<(abs(g-h)+1)<<" "<<"B"<<"\n";
                }
                }else{
                    cout<<(abs(g-h))<<" "<<"B"<<"\n";
                }
            }
        }
        if(n!=0){
        cout<<"1"<<"\n";
        }
    }
}
