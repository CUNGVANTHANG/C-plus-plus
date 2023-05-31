#include <iostream>
#include <string>

int main()
{
    // Bài 1: Viết chương trình nhập vào 1 chuỗi gồm các ký tự từ a -> z và có thể chứa khoảng trắng. Hãy loại bỏ các khoảng trắng ở đầu và cuối chuỗi.
    /*
    std::string str;
    std::cout << "Nhap chuoi: ";
    getline(std::cin, str);
    while(str[0]==' '){
        str.erase(0, 1);
    }
    while(str[str.length() - 1] == ' '){
        str.erase(str.length() - 1, 1);
    }
    std::cout << "Ket qua: " << str;

    */

    // Bài 2: Viết chương trình nhập vào 1 chuỗi gồm các ký tự a -> z và có thể chứa khoảng trắng. Hãy loại bỏ các khoảng trắng thừa ở giữa các từ.
    /*
    std::string str;
    std::cout << "Nhap chuoi: ";
    getline(std::cin, str);
    int i = 0;
    while (i < str.length())
    {
        if (str[i] == ' ' && str[i + 1] == ' ')
        {
            str.erase(i, 1);
        }
        else
        {
            i++;
        }
    }
    std::cout << "Ket qua: " << str;
    */
    
    // Bài 3: Viết chương trình nhập vào 1 chuỗi gồm các ký tự a -> z, A -> Z và có thể chứa khoảng trắng. Hãy viết hoa các chữ cái ở đầu mỗi từ, các chữ cái còn lại để ở dạng viết thường.
    /*
    std::string str;
    std::cout << "Nhap chuoi: ";
    getline(std::cin, str);
    for(int i = 0;i< str.length(); i++){
        str[i] = tolower(str[i]);
    }
    if(str[0]!=' '){
        str[0] = toupper(str[0]);
    }
    for(int i = 0;i < str.length(); i++){
        if(str[i] == ' ' && str[i+1] != ' '){
            str[i+1] = toupper(str[i+1]);
        }
    }
    std::cout << "Ket qua: " << str;
    */
    
    // Bài 4: Viết chương trình nhập vào 1 chuỗi gồm các ký tự a -> z, A -> Z và có thể chưa khoảng trắng. Hãy chuẩn hóa chuỗi đó.
    std::string str;
    std::cout << "Nhap chuoi: ";
    getline(std::cin, str);
    int i = 0;
    while(str[0] == ' '){
        str.erase(0, 1);
    }
    while(str[str.length()-1] == ' '){
        str.erase(str.length()-1, 1);
    }
    while(i < str.length()){
        if(str[i] == ' ' && str[i+1] == ' '){
            str.erase(i, 1);
        }
        else{
            i++;
        }
    }
    for(i=0;i<str.length();i++){
        str[i] = tolower(str[i]);
    }
    if(str[0]!= ' '){
        str[0] = toupper(str[0]);
    }
    for(i=0;i<str.length();i++){
        if(str[i] == ' ' && str[i+1] != ' '){
            str[i+1] = toupper(str[i+1]);
        }
    }

    std::cout << "Ket qua: " << str;
    return 0;
}