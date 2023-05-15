#include <iostream>

// Tính trừu tượng

class Animal { // Abstract class
    public:
        virtual void make_sound() = 0;
        virtual void move() = 0;
};

class Cat : public Animal {
    public:
        void make_sound(){
            std::cout << "Cat make sound" << std::endl;
        }
        void move(){
            std::cout << "Cat move" << std::endl;
        }
};

class Dog : public Animal {
    public:
        void make_sound(){
            std::cout << "Dog make sound" << std::endl;
        }
        void move(){
            std::cout << "Dog move" << std::endl;
        }
};

int main(){
    Cat cat;
    cat.make_sound();
    cat.move();
    Dog dog;
    dog.make_sound();
    dog.move();

    return 0;
}