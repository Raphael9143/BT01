#include <iostream>
#include <iomanip>
#include <math.h>

int main()
{
    double a, b, c;
    std::cin >> a >> b >> c;
    double s = (a+b+c)/2;
    double area = sqrt(s*(s-a)*(s-b)*(s-c));
    std::cout << area << std::endl;
    return 0;
}
