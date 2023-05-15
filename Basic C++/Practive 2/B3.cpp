#include <iostream>

int main()
{
    bool result1 = 1 + 3 < 2 * 4 - 1 && 1; // 4 < 7 <=> True
    std::cout << result1 << std::endl;

    bool result2 = 2 * 2 - 1 + 5 / 1 && 4 - 3;
    std::cout << result2 << std::endl;

    bool result3 = (2 - 3 * 1) && 0 / 5 * 2 + 1;
    std::cout << result3 << std::endl;

    int x, y;
    {
        x = 1;
        y = 2;
        x++;
        bool result4 = x < y;
        std::cout << result4 << std::endl;
    }

    {
        x = 2;
        y = 1;
        x--;
        y++;
        bool result5 = x < y;
        std::cout << result5 << std::endl;
    }

    {
        x = 2;
        y = 2;
        x++;
        bool result6 = x == y;
        std::cout << result6 << std::endl;
    }

    return 0;
}