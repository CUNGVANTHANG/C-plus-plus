#include <iostream>
#include <string>

class Cat{
    private:
        std::string name;
        int age;
    public:
        Cat(){}

        Cat(std::string name, int age){
            this->name = name;
            this->age = age;
        }

        std::string get_name(){
            return this->name;
        }
        int get_age(){
            return this->age;
        }
};

int main(){
    Cat *cat = new Cat("Thang", 19);

    std::cout << "Name: " << cat->get_name() << std::endl;
    std::cout << "Age: " << cat->get_age() << std::endl;
    return 0;
}