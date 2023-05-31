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
    if(tuoi_khac >=0){
        std::cout << "Nam " << nam_khac << " ban " << tuoi_khac << " tuoi";
    }
    else {
        std::cout << "Ban chua sinh ra vao nam " << nam_khac;
    }

    return 0;
}