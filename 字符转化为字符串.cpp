#include <iostream>  
#include <string>  
using std::cout;
int main() {
    std::string s;
    int cnt = 0;
    int ans = 0;
    std::cin >> s;
    for (int i = 2; i <=s.size(); i++) {
        std::string a = std::string(1, s[i-2]) + std::string(1, s[i - 1]) + std::string(1, s[i]);
        if (a.compare("red") == 0) {
            cnt++;
        } else {
            ans++;
        }
    }
    if (cnt>=2) {
        std::cout << "Yes";
    } else{
        std::cout << "No";
    }
    return 0;
}