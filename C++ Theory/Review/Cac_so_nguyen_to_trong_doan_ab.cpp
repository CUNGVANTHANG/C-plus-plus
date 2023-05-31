#include <iostream>
#include <cmath>

using namespace std;

int *Prime(int a, int b, int &returnSize);

bool isPrime(int a) {
    if (a < 2) {
        return false;
    }
    else if (a == 2) {
        return true;
    }
    else if (a % 2 == 0) {
        return false;
    }
    for(int i = 3; i <= sqrt(a); i++){
        if(a % i == 0){
            return false;
        }
    }
    return true;
}

int *Prime(int a, int b, int &returnSize) {
    int size = 0;
    for(int i = a; i <= b; i++){
        if(isPrime(i)) {
            size++;
        }
    }
    int *frimes = new int[size];
    int index = 0;
    for(int i = a; i <= b; i++){
        if(isPrime(i)){
            frimes[index] = i;
            index++;
        }
    }
    returnSize = size;
    return frimes;
}

int main() {
    int a, b;
    cin >> a >> b;
    int size;
    int *frimes = Prime(a, b, size);
    for(int i = 0; i < size; i++){
        cout << frimes[i] << " ";
    }
    delete[] frimes;
    return 0;
}