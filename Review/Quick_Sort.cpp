#include <iostream>
#include <vector>

using namespace std;

int partition(vector<int> &vt, int start, int end){
    int pivot = vt[end];  
    int left = start;     
    int right = end - 1;  
    while (true) {
        while (left <= right && vt[left] < pivot) left++;
        while (right >= left && vt[right] > pivot) right--;
        if (left >= right) break;   
        swap(vt[left], vt[right]);
        left++;
        right--;     
    }
    swap(vt[left], vt[end]);
    return left;
}

void Quick_Sort(vector<int> &vt, int start, int end) {
    if (start < end) {
        int index = partition(vt, start, end);
        Quick_Sort(vt, start, index - 1);
        Quick_Sort(vt, index + 1, end);
    }
}

int main(){
    int n;
    cin >> n;
    vector<int> vt(n);
    for(int i = 0; i < n; i++){
        cin >> vt[i];
    }
    Quick_Sort(vt, 0, n-1);
    for(int i = 0; i < n; i++){
        cout << vt[i] << " ";
    }
    return 0;
}