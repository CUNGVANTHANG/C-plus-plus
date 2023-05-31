#include <iostream>

using namespace std;

void FastFind(int arr[][5], int n) {
    int maxOnesRow = 0;
    int i = 0;
    int j = n - 1;
    while (i < n && j >=0) {
        if (arr[i][j] == 1) {
            j--;
            maxOnesRow = i;
        }
        else {
            i++;
        }

    }
    cout << maxOnesRow + 1;
}

int main() {
    int arr[5][5] = {1, 0, 0, 0, 0,
                     1, 1, 1, 1, 0,
                     1, 1, 0, 0, 0,
                     1, 1, 1, 1, 1,
                     1, 1, 1, 0, 0};    
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    FastFind(arr, 5);
    return 0;
}