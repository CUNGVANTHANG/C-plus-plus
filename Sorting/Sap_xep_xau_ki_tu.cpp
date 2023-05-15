#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

bool compare(std::string &arr1, std::string &arr2){
    if(arr1.size() != arr2.size()){
        return arr1.size() < arr2.size();
    }
        return arr1 < arr2;
}


int main(){
    int n;
    std::cin >> n;
    std::vector<std::string> arr(n);
    std::cin.ignore(); // bỏ qua kí tự enter sau khi nhập n
    for (int i = 0; i < n; i++){
        getline(std::cin, arr[i]);
        
    }
    std::sort(arr.begin(), arr.end(), compare);
    for (int i = 0; i < n;i++){
        std::cout << arr[i] << std::endl;
    }
    return 0;
}