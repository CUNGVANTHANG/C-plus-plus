#include <iostream>
#include <fstream>
#include <string>

int main(){
    std::ofstream ofs;
    ofs.open("Test.bin", std::ios::binary);
    if(!ofs.is_open()){
        std::cout << "Khong ton tai file";
        return 1;
    }

    int n = 6;
    ofs.write((char*)&n, sizeof(int));
    ofs.close();

    std::ifstream ifs;
    ifs.open("Test.bin", std::ios::binary);

    int read_n;
    ifs.read((char*)&read_n, sizeof(int));
    std::cout << read_n;
    ifs.close();

    return 0;
}