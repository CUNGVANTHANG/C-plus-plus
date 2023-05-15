#include <iostream>

using namespace std;

int main(){
    // C1: Sử dụng mảng - o(n)
    // int n;
    // cin >> n;
    // int f[n];
    // f[0] = 0;
    // f[1] = 1;
    // if(n < 0){
    //     return 0;
    // }
    // for(int i = 2; i <= n; i++){
    //     f[i] = f[i - 1] + f[i - 2];
    // }
    // for(int i = 0; i <= n; i++){
    //     cout << f[i] << " ";
    // }

    // C2: Không sử dụng mảng - o(n)
    // int n;
    // cin >> n;
    // int f0 = 0;
    // int f1 = 1;
    // int fn = 1;
    // if(n < 0){
    //     return 0;
    // }
    // else if(n == 0 || n == 1){
    //     fn = n;
    // }
    // else {
    //     for(int i = 2; i <= n; i++){
    //         fn = f0 + f1;
    //         f0 = f1;
    //         f1 = fn;
            
    //     }
    // }
    // cout << fn;

    // C3: Sử dụng công thức - o(logn)
    int n;
    cin >> n;
    int fib = (1/sqrt(5))*();
    
    
    return 0;
}