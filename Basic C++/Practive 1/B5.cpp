#include <iostream>

int main(){
    int length, width, cir, area;
    std::cin >> length >> width;
    cir = (length + width) *2;
    area = length * width;
    std::cout << cir << " " << area;
    return 0;
}