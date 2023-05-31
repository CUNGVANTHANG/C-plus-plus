#include <iostream>
#include <vector>
#include <string>
#include <algorithm>


using namespace std;

bool compare(string arr1, string arr2){
    return (arr1 + arr2) > (arr2 + arr1);
}

void largestDigit(vector<int> &arr){
    // Lưu dữ liệu sang vector strs
    vector<string> strs;
    int n = arr.size();
    for(int i = 0; i < n; i++){
        strs.push_back(to_string(arr[i]));
    }

    // Sắp xếp chuỗi
    sort(strs.begin(), strs.end(), compare);
    
    string result;
    for(int i = 0; i < n; i++) {
        result += strs[i];
    }
    if(result[0] == '0'){
        cout << "0";
        return;
    }

    cout << result;
}

int main(){
    int n;
    cin >> n;
    cin.ignore();
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    largestDigit(arr);
    return 0;
}