#include <iostream>
#include <vector>

using namespace std;

void MaxMin(vector<int> &vt) {
    int Max = vt[0];
    for(int i = 1; i < vt.size(); i++){
        if(Max < vt[i]) {
            Max = vt[i];
        }
    }
    
    int Min = vt[0];
    for(int i = 1; i < vt.size(); i++){
        if(Min > vt[i]) {
            Min = vt[i];
        }
    }
    cout << Max << " " << Min;
}

void scanf(vector<int> &vt) {
    for(int i = 0; i < vt.size(); i++){
        cin >> vt[i];
    }
}

void printf(vector<int> &vt) {
    for(int i = 0; i < vt.size(); i++) {
        cout << vt[i] << " ";
    }
}

int main () {
    int n;
    cin >> n;
    vector<int> vt(n);
    scanf(vt);
    MaxMin(vt);
    return 0;
}