#include <iostream>
#include <math.h>

int main()
{
    double mass, height;
    std::cin >> mass >> height;
    double BMI = mass/(height*height);
    std::cout << BMI << std::endl;
    return 0;
}
