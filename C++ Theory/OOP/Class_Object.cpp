#include <iostream>
#include <string>

// Class, Object

// 1 con người, tên: Nguyen Van A, tuoi 20, dia chi: Ha Noi

class Person{
    public:
        // Properties - Thuộc tính
        std::string name;
        int age;
        std::string address;

        // Constructor - Hàm khởi tạo
        Person() {
            std::cout << "Ham khoi tao" << std::endl;
        }
        Person(std::string _name, int _age, std::string _address) {
            name = _name;
            age = _age;
            address = _address;
        }

        // Methods - Các hàm (chỉ hành vi)
        void work() {
            std::cout << name << " is working in " << address << std::endl;
        }
    
    private: 
        // std::string address = "Ha Noi";
};

int main(){
    Person person1("Nguyen Van A", 20, "Ha Noi");
    // person1.name = "Nguyen Van A";
    // person1.age = 20;
    // person1.address = "Ha Noi";

    std::cout << "Name: " << person1.name << std::endl;
    std::cout << "Age: " << person1.age << std::endl;
    std::cout << "Address: " << person1.address << std::endl;

    person1.work();
    
    return 0;
}