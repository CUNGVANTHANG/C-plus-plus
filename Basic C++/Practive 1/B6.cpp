#include<iostream>

int main(){
    float radius, cir, area;
    std::cin >> radius;
    cir = radius*2*3.14;
    area = radius*radius*3.14;
    std::cout << cir << " " << area;
    return 0;
}