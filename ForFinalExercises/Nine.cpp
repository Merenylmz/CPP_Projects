#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 20;
    int *p = &a;
    int &r = b;

    *p = (r > a) ? r-- : ++a;//*p =20 a = 20,  b = r = 19
    int c = (*p == a) ? (*p)++ : --r;//c = 20 *p=21=a
    r = (c < 20) ? a + c : *p - c; //r=1=b

    cout << "a: " << a << ", b: " << b << ", c: " << c << endl;
    return 0;
}