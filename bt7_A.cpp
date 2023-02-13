#include <iostream>
using namespace std;

int main(){
    int threeInt = 3;
    int fourInt = 4;
    double threeDouble = 3.0;
    double fourDouble = 4.0;
    cout << threeInt/fourInt << endl; //ra 0 vì threeInt/fourInt là kiểu int/int nên kết quả là int
    cout << threeInt/fourDouble << endl; //ra 0.75 vì int/double=double
    cout << threeDouble/fourInt << endl; //0.75
    cout << threeDouble/fourDouble << endl; // 0.75
    return 0;
}
