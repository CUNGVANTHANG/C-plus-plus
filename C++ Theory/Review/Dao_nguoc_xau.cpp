#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    getline(cin, str);
    string str1;
    for(int i = str.size() - 1; i >= 0; i--) {
        str1.push_back(str[i]);
    } 
    cout << str1;
    return 0;
}