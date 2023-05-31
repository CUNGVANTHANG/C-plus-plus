#include <iostream>
int main()
{
    int a = 22;
    std::cout << a << std::endl; // In ra a = 22
    // khối câu lệnh 1
    {
        int a = 33;
        std::cout << a << std::endl; // In ra a = 33
    } // Kết thúc khối câu lệnh 1
    // khối câu lệnh 2
    {
        int a = 44;
        std::cout << a << std::endl; // In ra a = 44
    } // Kết thúc khối câu lệnh 2
    std::cout << a << std::endl; // In ra a = 22
    return 0;
} // Kết thúc hàm main(