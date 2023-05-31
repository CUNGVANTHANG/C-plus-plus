#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> elements(n);
    int sum = 0;
    for(int i = 0; i < n; i++){
        cin >> elements[i];
        sum += elements[i];
    }
    float avg = (float) sum / (float) n;
    int count = 0;
    for(int i = 0; i < n; i++){
        if((float) elements[i] > avg) {
            count++;
        }
    }
    cout << count;

    return 0;
}