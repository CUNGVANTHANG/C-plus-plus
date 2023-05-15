#include<iostream>

int main(){
    int a, b, c, d;
    std::cin >> a >> b >> c >> d;
    bool result1 = a+b>c+d;
    std::cout << result1 << std::endl;
    bool result2 = a-b>c-d;
    std::cout << result2 << std::endl;
    return 0;
}