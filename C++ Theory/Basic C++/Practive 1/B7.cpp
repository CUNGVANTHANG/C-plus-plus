#include <iostream>

int main(){
    float Math, Literature, English;
    std::cin>> Math >> Literature >> English;
    float Average = (Math + Literature + English)/3;
    if(Average > 4){
        std::cout << "Do";
    }
    else{
        std::cout << "Truot";
    }
    return 0;
}