#include <iostream>
#include <string>

using namespace std;

bool isSubtring (string str1, string str2) {
    if(str1.size() > str2.size()) {
        return false;
    }
    for(int i = 0; i <= str2.size() - str1.size(); i++) {
        if(str2.substr(i, str1.size()) == str1){
            return true;
        }
    }
    return false;
}

int main(){
    string str1;
    string str2;
    getline(cin, str1);
    getline(cin, str2);
    // In ra man hinh
    // cout << str1 << endl;
    // cout << str2;
    if(isSubtring(str1,str2) == true){
        cout << "YES";
    }
    else {
        cout << "NO";
    }

    
    return 0;
}