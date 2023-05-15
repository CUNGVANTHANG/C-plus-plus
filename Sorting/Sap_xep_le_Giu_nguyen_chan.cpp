#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

void parity_sort (vector<int> &element){
    vector<int> odd_element;
    for(int i =0;i < (int)element.size(); i++){
        if(element[i]% 2 !=0){
            odd_element.push_back(element[i]);
        }
    }

    sort(odd_element.begin(), odd_element.end());

    int j = 0;
    for(int i = 0; i< (int)element.size(); i++){
        if(element[i]% 2 !=0){
            element[i] = odd_element[j++];
        }
    }

    for(int i = 0; i < (int)element.size();i++){
        cout << element[i] << " ";
    }
    
}

int main(){
    int n;
    cin >> n;
    vector<int> element(n);

    for(int i =0;i< n;i++){
        cin >> element[i];
    }
    cout << n << endl;
    parity_sort(element);

    return 0;
}