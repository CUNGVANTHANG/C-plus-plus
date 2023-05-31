#include <iostream>
#include <vector>

using namespace std;

void Insertion_Sort(vector<int> &vt) {
    for(int i = 1; i < vt.size(); i++){
        int key = vt[i];
        int j = i - 1;
        while(j >= 0 && vt[j] > key) {
            vt[j + 1] = vt[j];
            j--;
        }

        vt[j + 1] = key;
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> vt(n);
    for(int i = 0; i < n; i++){
        cin >> vt[i];
    }
    Insertion_Sort(vt);
    for(int i = 0; i < n; i++){
        cout << vt[i] << " ";
    }
    return 0;
}