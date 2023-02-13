//DivideByZero
#include <bits/stdc++.h>
using namespace std;

int main(){
    int test1=50;
    double test2=3.14;
    test1/=0;
    test2/=0;
    cout << test1 << " " << test2;
    return 0;
}
//result: Two warnings due to dividing by zero in 7th and 8th line
//output: nothing
