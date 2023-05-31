#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> elements(n);
    for(int i = 0; i < n; i++){
        cin >> elements[i];
    }
    vector<int> odd_elements;
    for(int i = 0; i < n; i++){
        if(elements[i] % 2 != 0) {
            odd_elements.push_back(elements[i]);
        }
    }
    for(int i = 0; i < odd_elements.size(); i++){
        sort(odd_elements.begin(), odd_elements.end());
    }
    int index = 0;
    for(int i = 0; i < n; i++){
        if(elements[i] % 2 != 0) {
            elements[i] = odd_elements[index++];
        }
    }

    // In ra màn hình
    for(int i = 0; i < n; i++){
        cout << elements[i] << " ";
    }
    return 0;
}