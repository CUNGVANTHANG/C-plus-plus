#include <iostream>

using namespace std;

double binaryExponentiation(double x, int n) {
    double res = 1;
    while(n > 0) {
        if(n % 2 == 1) {
            res *= x;
        }

        x *= x;
        n /= 2;
    }
    return res;
}

int main() {
    double x;
    int n;
    cin >> x >> n;
    double S = binaryExponentiation(x, n);
    cout << x << "^" << n << " = " << S;
    return 0;
}