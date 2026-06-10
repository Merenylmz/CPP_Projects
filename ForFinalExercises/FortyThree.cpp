#include <iostream>
using namespace std;

void islemYap(int& a, int* b, int c) {
    a = a * 2;          // 1. Hamle
    b[1] = a + c;       // 2. Hamle 
    c = 999;            // 3. Hamle
}

int main() {
    int x = 5;
    int y[] = {10, 20, 30};
    int z = 100;

    islemYap(x, y, z); //x = 10, y = {10, 110, 30}, z = 100
    
    islemYap(y[0], &y[1], x); 

    cout << x << endl; // 10
    cout << y[0] << endl;//20
    cout << y[1] << endl;//110
    cout << y[2] << endl;//30
    cout << z << endl;//100

    return 0;
}