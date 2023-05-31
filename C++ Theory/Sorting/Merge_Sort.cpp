#include <iostream>
#include <algorithm>

using namespace std;

void merge(int arr[], int l, int m, int r){
    int n1 = m - l + 1;
    int n2 = r - m;

    // Tạo mảng tạm thời
    int L[n1], R[n2];

    // Copy dữ liệu vào các mảng L[] và R[]
    for(int i = 0; i < n1; i++){
        L[i] = arr[l + i];
    }
    for(int j = 0; j < n2; j++){
        R[j] = arr[m + 1 + j];
    }

    int i = 0;
    int j = 0;
    int k = l;

    while(i < n1 && j < n2) {
        if (L[i] <= R[j]){
            arr[k] = L[i];
            i++;
        }
        else{
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r){
    if (l < r){
        int m = (l+r-1)/2;
        mergeSort(arr, l ,m);
        mergeSort(arr, m + 1, r);

        merge(arr, l, m, r);
    }
}

void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        std::cout << arr[i] << " ";
    }
}

void scanArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        std::cin >> arr[i];
    }
}

int main(){
    int n;
    std::cin >> n;

    int arr[n];
    scanArray(arr, n);
    mergeSort(arr, 0, n-1);
    printArray(arr, n);
    return 0;
}
