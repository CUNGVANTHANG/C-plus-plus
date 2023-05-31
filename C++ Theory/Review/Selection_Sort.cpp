#include <iostream>
#include <vector>

using namespace std;

void Selection_Sort(vector<int> &vt) {
    for(int i = 0; i < vt.size(); i++){
        int min = i;
        for(int j = i + 1; j < vt.size(); j++){
            if(vt[min] > vt[j]){
                min = j;
            }
        }
        if(min != i) {
            swap(vt[i], vt[min]);
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
    Selection_Sort(vt);
    for(int i = 0; i < n; i++){
        cout << vt[i] << " ";
    }
    return 0;
}