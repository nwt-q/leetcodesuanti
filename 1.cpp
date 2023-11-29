#include <string>
#include <algorithm>
#include<iostream>
int main() {
    std::string date = "1926-08-16";
    date.erase(std::remove(date.begin(), date.end(), '-'), date.end());
    int dateInt = std::stoi(date);
	std::cout<<date;
    return 0;
}
