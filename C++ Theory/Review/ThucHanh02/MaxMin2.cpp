#include <iostream>
#include <vector>

using namespace std;

void MaxMin(vector<int> &vt) {
    int n = vt.size();
    int max, min;
    int i;
    if(n % 2 == 0) {
        if(vt[0] > vt[1]) {
            max = vt[0];
            min = vt[1];
        }
        else {
            max = vt[1];
            min = vt[0];
        }
        i = 2;
    }
    else {
        max = vt[0];
        min = vt[0];
        i = 1;
    }

    while(i < n - 1) {
        if(vt[i] > vt[i + 1]) {
            if(vt[i] > max){
                max = vt[i];
            }
            if(vt[i + 1] < min) {
                min = vt[i + 1];
            }
        }
        else {
            if(vt[i + 1] > max){
                max = vt[i + 1];
            }
            if(vt[i] < min){
                min = vt[i];
            }
        }
        
        i += 2;
    }

    cout << max << " " << min;
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