#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[1000001] = {0};
    a[0]=7,a[1]=11;
    for (int i = 2; i <= 1e6; i++) {
        a[i] = (a[i-1] + a[i-2])%3;
    }
    int b = 0;
    while (cin >> b) { 
        if(b!=0){
            if (a[b] % 3 == 0) {
                cout << "yes" << endl;
            } else {
                cout << "no" << endl;
            }
        }
    }
    return 0;
}
