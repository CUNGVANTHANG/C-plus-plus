#include <iostream>

int main()
{
    int nam_hien_tai;
    std::cout << "Nhap vao nam hien tai roi an ENTER. ";
    std::cin >> nam_hien_tai;
    int tuoi_hien_tai;
    std::cout << "Nhap vao tuoi hien tai roi an ENTER. ";
    std::cin >> tuoi_hien_tai;
    int nam_khac;
    std::cout << "Nhap vao nam ma ban muon biet tuoi cua minh. ";
    std::cin >> nam_khac;
    int tuoi_khac = nam_khac - (nam_hien_tai- tuoi_hien_tai);
    std::cout << "Nam " << nam_khac << " ban " << tuoi_khac << " tuoi";

    // Nhận xét: Năm sinh muốn biết nhỏ hơn năm sinh của mình sẽ ra tuổi âm (nghĩa là mình chưa sinh ra)
    return 0;
}