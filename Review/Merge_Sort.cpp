#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void Merge(vector<int> &vt, int start, int mid, int end){
    vector<int> vt1(vt.begin() + start, vt.begin() + mid + 1);
    vector<int> vt2(vt.begin() + mid + 1, vt.begin() + end + 1);
    int index1 = 0;
    int index2 = 0;
    int index = start;
    while(index1 < vt1.size() && index2 < vt2.size()){
        if(vt1[index1] < vt2[index2]) {
            vt[index++] = vt1[index1++];
        }
        else {
            vt[index++] = vt2[index2++];
        }
    }
    while(index1 < vt1.size()){
        vt[index++] = vt1[index1++];
    }
    while(index2 < vt2.size()){
        vt[index++] = vt2[index2++];
    }
}

void Merge_Sort(vector<int> &vt, int start, int end){
    if(start >= end){
        return;
    }
    int mid = (start + end) / 2;
    Merge_Sort(vt, start, mid);
    Merge_Sort(vt, mid + 1, end);
    Merge(vt, start, mid, end);
}
 

int main() {
    int n;
    cin >> n;
    vector<int> vt(n);
    for(int i = 0; i < n; i++){
        cin >> vt[i];
    }
    Merge_Sort(vt, 0, n-1);
    for(int i = 0; i < n; i++){
        cout << vt[i] << " ";
    }
    return 0;
}