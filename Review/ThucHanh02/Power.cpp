#include <iostream>

using namespace std;

int main() {
    float x;
    int n;
    cin >> x >> n;
    float S = 1;
    for(int i = 0; i < n; i++){
        S *= x;
    }
    cout << x << "^" << n << " = " << S;
    return 0;
}