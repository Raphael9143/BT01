#include <iostream>

int main()
{
    int a, b;
    std::cin >> a >> b;
    bool result = false;
    if (a%7==0 && b%7==0)
        result = true;
    std::cout << result << std::endl;
    return 0;
}
