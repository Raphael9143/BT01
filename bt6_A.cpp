#include <iostream>
using namespace std;

double x;
//kq: x luôn là số 0
int main(){
    /*int a = 27 * "three";*/ // Dự đoán: không thể nhân 1 số kiểu int với xâu
    //result: error: invalid operands of types "int" and "const char[6]" to binary "oper...
    /*double x;*/ // x được khai báo nên x luôn có 1 giá trị và đó là giá trị rác, khi in ra thì sẽ ra một số ngẫu nhiên bắt kì
    cout << x;
    return 0;
}
