#include <iostream>

int main()
{
    for (int i=0; i<=23; i++){
        if (i==0) std::cout << 12 << " midnight" << std::endl;
        else if (i<12) std::cout << i << "am" << std::endl;
        else if (i==12) std::cout << 12 << " noon" << std::endl;
        else std::cout << i-12 << "pm" << std::endl;
    }
    return 0;
}
