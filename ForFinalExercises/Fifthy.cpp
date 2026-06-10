#include <iostream>
using namespace std;

void zihinYakici(int& a, int* b, int c) {
    a = c * 2;
    *b = a + c;
    c = 999; 
}

int main() {
    int a = 3;
    int b = 5; 
    int c = 10;

    zihinYakici(b, &c, a); // b = 6, c = 9, a = 3

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "c: " << c << endl;

    return 0;
}