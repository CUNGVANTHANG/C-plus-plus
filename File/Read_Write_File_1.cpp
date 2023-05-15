#include <iostream>
#include <fstream>
#include <string>

int main(){
    std::fstream fs;
    fs.open("C:\\Users\\PC\\OneDrive\\Documents\\C++\\Review C++\\Review\\test.txt");
    // if (fs.is_open()) {std::cout << "Mo file thanh cong";}
    // else {std::cout << "Mo file that bai";}

    // Kiểm file có tổn tại file, tồn tại thì thực hiện tiếp chương trình, không tồn tại thì return 1
    if(!fs.is_open()){
        return 1;
    }
    
    // Ghi file
    // fs << "Hello World";

    // Đọc file
    // std::string str;
    // getline(fs, str);
    // std::cout << str;

    // Ví dụ:
    // fs << "Cung Van Thang" << std::endl;
    // fs << 2003;
    std::string name;
    int year;
    getline(fs, name);
    fs >> year;
    std::cout << name << std::endl;
    std::cout << year;

    fs.close(); // Đóng file
    return 0;
}