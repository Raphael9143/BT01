#include <iostream>
#include <string>
using namespace std;

int main()
{
    string f0="a", f1="b";
    string temp;
    cout << f0 << " " << f1 << " ";
    for (int i=2; i<=10; i++){
        temp=f1;
        f1=f1+f0;
        f0=temp;
        cout << f1 << " ";
    }
    return 0;
}
