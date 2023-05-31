#include <iostream>
#include <vector>

using namespace std;

void Bubble_Sort(vector<int> &vt) {
    for(int i = 0; i < vt.size() - 1; i++){
        for(int j = 0; j < vt.size() - 1 - i; j++){
            if(vt[j] > vt[j + 1]){
                swap(vt[j], vt[j + 1]);
            }
        }
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> vt(n);
    for(int i = 0; i < n; i++){
        cin >> vt[i];
    }
    Bubble_Sort(vt);
    for(int i = 0; i < n; i++){
        cout << vt[i] << " ";
    }
    return 0;
}