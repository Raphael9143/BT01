//BT8
/*#include <iostream>
using namespace std;

int main(){
    int arg1;
    arg1 = -1;
    int x, y, z;
    char myDouble = '5';
    char arg1 = 'A';
    //lỗi cú pháp vì 2 biến arg1
    cout << arg1 << "\n";
    return 0;
}*/

//BT9
/*#include <iostream>
using namespace std;

int main(){
    int arg1;
    arg1 = -1;
    {
        char arg1 = 'A'; // lúc này arg1 được đặt trong một {} nên nó sẽ ở trong 1 chương trình khác, vẫn in ra A.
        cout << arg1 << "\n";
    }
    return 0;
}*/

//BT10

#include <iostream>
using namespace std;

int main(){
    int arg1;
    arg1 = -1;
    {
        char arg1 = 'A';
    }
    cout << arg1 << "\n"; // -1
    return 0;
}
