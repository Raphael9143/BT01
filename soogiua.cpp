#include <iostream>
#include <math.h>
#include <algorithm>

int main()
{
    double a, b, c, d, e;
    std::cin >> a >> b >> c >> d >> e;
    double tbc = (a+b+c+d+e)/5;
    double Min = std::min({abs(tbc-a), abs(tbc-b), abs(tbc-c), abs(tbc-d), abs(tbc-e)});
    if (Min == abs(tbc-a))
        std::cout << a << std::endl;
    else if (Min == abs(tbc-b))
        std::cout << b << std::endl;
    else if (Min == abs(tbc-c))
        std::cout << c << std::endl;
    else if (Min == abs(tbc-d))
        std::cout << d << std::endl;
    else if (Min == abs(tbc-e))
        std::cout << e << std::endl;
    return 0;
}
