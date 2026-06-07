#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 12;
    int &ref = a;
    int *ptr = &b;

    ref = (*ptr % a == 2) ? (*ptr) - a : a * 2;
    *ptr = (ref > b) ? ref + 1 : a + b;
    a = (a == ref) ? ++(*ptr) : (*ptr)++;

    cout << "a: " << a << ", b: " << b << ", ref: " << ref << endl;
    return 0;
}
//ref = 7, a = 7
//*ptr=19
//a=20 b=20 ref = 20
