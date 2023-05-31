#include <iostream>
#include <fstream>
#include <string>

int main(){
    // std::fstream fs;
    // Chế độ ios::in chỉ đọc file
    // fs.open("test.txt", std::ios::in);
    // std::string name;
    // getline(fs, name);
    // std::cout << name;

    // Chế độ ios::out | ios::trunc ghi file và xóa hết nội dung file cũ, nếu file không tồn tại -> tạo thành 1 file mới
    // fs.open("test.txt", std::ios::out | std::ios::trunc);
    // if(!fs.is_open()) {
    //     std::cout << "File khong ton tai";
    //     return 1;
    // }
    // fs << "Hi";

    // Chế độ ios::app ghi file vào cuối nội dung, nếu file không tồn tại -> tạo thành 1 file mới
    // fs.open("test.txt", std::ios::out | std::ios::app);
    // if(!fs.is_open()) {
    //     std::cout << "File khong ton tai";
    //     return 1;
    // }
    // fs << " Hello";

    // Chế độ ios::ate đọc file và di chuyển con trỏ xuống cuối nội dung
    // fs.open("test.txt", std::ios::in | std::ios::ate);
    // std::string name;
    // getline(fs, name);
    // std::cout << name;
    // fs.close();

    // std::ifstream ifs; // chế độ đọc ifstream
    // ifs.open("test.txt");
    // if(!ifs.is_open()) {
    //     std::cout << "File khong ton tai";
    //     return 1;
    // }
    // ifs.close();

    std::ofstream ofs; // chế độ ghi ofstream
    ofs.open("test.txt");
    if(!ofs.is_open()) {
        std::cout << "File khong ton tai";
        return 1;
    }
    ofs << "HiHiHIHI";
    ofs.close();

    return 0;
}