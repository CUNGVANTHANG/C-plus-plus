#include <iostream>
#include <string>

/*  - str.substr(start, length) - cắt chuỗi con ra từ chuỗi string ban đầu bằng cách chỉ định vị trí và độ dài chuỗi cần cắt
    - str.find(s) - tìm kiếm
    - str.erase(start, n) - xóa 
    - str.replace(start, n, s) - thay thế
    - str.compare(s) - so sánh, bằng nhau trả về 0, nhỏ hơn trả về -1, lớn hơn trả về 1
    - str.insert(start, s) - chèn
    - str.length(), str.size - độ dài
*/

int main(){
    /*
    std::string str = "01234";
    std::string str1 = str.substr(2, 3);
    std::cout << str1; // In ra 234
    
    */

    /*
    std::string str = "abcd";
    std::string str1 = "cd";
    std::cout << str.find(str1); // In ra 2 

    */
    
    /*
    std::string str = "abcd";
    str.erase(2, 2);
    std::cout << str;
    */

   /*
    std::string str = "abcd";
    str.replace(1, 2, "***");
    std::cout << str;
    return 0;
   */

    
    std::string str1 = "abcd";
    std::string str2 = "aacd";
    std::cout << str1.compare(str2);
    
    
    /*
    std::string str = "abcd";
    str.insert(1, "**");
    std::cout << str;
    */
    
    // std::string str = "abcd";
    // std::cout << str.size() << std::endl;
    // std::cout << str.length();
    // return 0;
}