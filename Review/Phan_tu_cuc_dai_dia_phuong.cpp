#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

vector<int> getInput(string str){
    vector<int> res;
    stringstream ss(str);
    while(!ss.eof()){
        int val;
        ss >> val;
        res.push_back(val);
    }
    return res;
}

int sum_local(vector<int> str) {
    int sum = 0;
    for(int i = 1; i < str.size() - 1; i++){
        if(str[i - 1] < str[i] && str[i] > str[i + 1]) {
            sum += str[i];
        }
    }
    return sum;
}


int main() {
    string str; getline(cin, str);
    vector<int> v = getInput(str);
    cout << sum_local(v);
    return 0;

}