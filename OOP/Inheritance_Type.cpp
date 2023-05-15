#include <iostream>
#include <string>

// Tính kế thừa

// Kiểu truy câp public: Trong class, ngoài class, kế thừa
// Kiểu truy cập protected: Trong class, kế thừa
// Kiểu truy cập private: Trong class

// Kiểu kế thừa public: public (cha) -> public (con) | protected (cha) -> protected (con)
// Kiểu kế thừa protected: public(cha), protected (cha) -> protected(con)
// Kiểu kế thừa private: public(cha), protected (cha) -> private (con)

class Animal { // Class cha
    protected:
        float weight = 30;
    public:

        void run(){
            std::cout << "Animal is running..." << std::endl;
        }
};

class Pet {
    public:
        std::string name;
};

class Cat : public Animal, public Pet// Class con
{
    public:
        void eat(){
            std::cout << "Cat is eating..." << std::endl;
        }
};

int main(){
    Cat cat;
    cat.name = "Thang";

    std::cout << "Name: " << cat.name << std::endl;
    return 0;
}