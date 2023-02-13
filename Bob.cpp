#include <iostream>
using namespace std;

int main(){
    int x;
    cin >> x;
    if (x<50) cout << "I'll choose the other card.";
    else if (x>=50) cout << "I'll choose this card.";
    return 0;
}
