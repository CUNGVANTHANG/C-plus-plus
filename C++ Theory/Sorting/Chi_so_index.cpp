#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int max_h_index(vector<int> &citations) {
    // Sắp xếp giảm dần
    sort(citations.rbegin(), citations.rend());
    int max_h = 0;
    for(int i = 0;i< (int)citations.size();i++){
        int h = min(i+1, citations[i]); // So sánh i + 1 với phần tử thứ [i] 
        max_h = max(max_h, h);
    }
    return max_h;
}

int main(){
    int n;
    cin >> n;

    vector<int> citations(n);
    for(int i =0;i < n;i++){
        cin >> citations[i];
    }
    cout << max_h_index(citations);
    
    return 0;
}