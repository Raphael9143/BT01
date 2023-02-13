#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    double arr[n];
    for (int i=0; i<n; i++){
        std::cin >> arr[i];
    }
    double sum = 0, Max = arr[0], Min = arr[0];
    for (int i=0; i<n; i++){
        if (arr[i]>Max) Max = arr[i];
        if (arr[i]<Min) Min = arr[i];
        sum += arr[i];
    }
    std::cout << "Mean: " << sum/n << std::endl
        << "Max: " << Max << std:: endl
            <<"Min: " << Min << std:: endl;
    return 0;
}
