#include <iostream>
#include <algorithm>

using namespace std;

int Fibonacci(int n){
    int f0 = 0;
    int f1 = 1;
    int fn = 1;

    if(n < 0){
        return 0;
    }
    else if( n == 0 || n == 1){
        return n;
    }
    else {
        for(int i = 2; i <= n; i++){
            f0 = f1;
            f1 = fn; 
            fn = f0 + f1;
            
        }
    }
    return fn;
}

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cout << Fibonacci(i) << " ";
    }

    return 0;
}