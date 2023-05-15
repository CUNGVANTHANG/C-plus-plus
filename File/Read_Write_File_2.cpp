#include <iostream>
#include <fstream>
#include <string>

struct Persons
{
    std::string name;
    int age;

    Persons(){}

    Persons(std::string _name, int _age) {
        name = _name;
        age = _age;
    } 
};


int main(){
    Persons *persons = new Persons[2];
    // persons[0] = Persons("Thang", 19);
    // persons[1] = Persons("Thang", 20);

    std::fstream fs;
    fs.open("test.txt");

    if(!fs.is_open()){
        return 1;
    }
    // Ghi file
    // for(int i = 0; i < 2; i++){
    //     fs << persons[i].name << std::endl;
    //     fs << persons[i].age << std::endl;
    // }

    // Đọc file
    for(int i = 0; i < 2; i++){
        getline(fs, persons[i].name);
        fs >> persons[i].age;
        fs.ignore();
    }

    for(int i = 0; i < 2; i++){
        std::cout << persons[i].name << std::endl;
        std::cout << persons[i].age << std::endl;
    }
    
    return 0;
}