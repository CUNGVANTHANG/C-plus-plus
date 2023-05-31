#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void print(vector<int> &vt) {
    for(int i = 0; i < vt.size(); i++){
        cout << vt[i] << " ";
    }
}

void selectionSort(vector<int> &vt) {
    for(int i = 0; i < vt.size(); i++){
        int min = i;
        for(int j = i + 1; j < vt.size(); j++){
            if(vt[min] > vt[j]) {
                min = j;
            }
        }
        if(i != min) {
            swap(vt[i], vt[min]);
        }
    }
}

void insertionSort(vector<int> &vt) {
    for(int i = 1; i < vt.size(); i++){
        int j = i;
        while(j > 0 && vt[j-1] > vt[j]){
            swap(vt[j], vt[j-1]);
            j = j - 1;
        }
    }
}

void bubbleSort(vector<int> &vt) {
    for(int i = 0; i < vt.size() - 1; i++){
        for(int j = 0; j < vt.size() - 1 - i; j++){
            if(vt[j] > vt[j + 1]) {
                swap(vt[j], vt[j+1]);
            }
        }
    }
}

void merge(vector<int> &vt, int start, int mid, int end){
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

void mergeSort(vector<int> &vt, int start, int end){
    if(start >= end){
        return;
    }
    int mid = (start + end) / 2;
    mergeSort(vt, start, mid);
    mergeSort(vt, mid + 1, end);

    merge(vt, start, mid, end);
}
 

int main() {
    vector<int> vt = {5, 2, 4, 3, 1, 9, -200, 5, 72, 6};
    // selectionSort(vt);
    // insertionSort(vt);
    // bubbleSort(vt);
    mergeSort(vt, 0, vt.size() - 1);
    print(vt);
    return 0;
}