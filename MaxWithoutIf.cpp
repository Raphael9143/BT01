#include <iostream>
#include <math.h>

int main()
{
    double a, b;
    std::cin >> a >>b;
    double result = (a+b)/2+abs(a-b)/2;
    std::cout << result << std::endl;
    return 0;
}
