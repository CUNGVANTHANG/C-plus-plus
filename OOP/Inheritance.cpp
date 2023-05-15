#include <iostream>
#include <string>

// Tính kế thừa

class Animal { // Class cha
    public:
        std::string name;
        float weight;

        void run(){
            std::cout << "Animal is running..." << std::endl;
        }
};

class Cat : public Animal // Class con
{
    public:
        void eat(){
            std::cout << "Cat is eating..." << std::endl;
        }
};

class Dog : public Animal // Class con
{
    public:
        void eat(){
            std::cout << "Dog is eating..." << std::endl;
        }
};

int main(){
    Cat cat;
    cat.weight = 30;
    cat.name = "Thang";

    std::cout << "Name: " << cat.name << std::endl;
    std::cout << "Weight: " << cat.weight << std::endl;
    return 0;
}