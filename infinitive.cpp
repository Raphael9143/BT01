#include <iostream>

int main()
{
    bool result = true;
    while(result){
        int n;
        std::cin >> n;
        if (n>=0 && n%5==0) std::cout << n/5 << std::endl;
        else if (n!=-1 && n%5!=0) {
            std::cout << -1 << std::endl;
        }
        else {
            std::cout << -1 << std::endl;
            std::cout << "Bye" << std::endl;
            result = false;
        }
    }
    return 0;
}
