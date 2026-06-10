#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int b = 10;
    int c = 0;

    // HEDEF 1: 'sonuc' degiskeni tam olarak 20 olacak!
    // HEDEF 2: 'c' degiskeni artmayacak, 0 olarak kalacak! (Kısa Devre Vurusu)
    
    //101 101
    //010
    int sonuc = (~(a | 5) & c++) ? (b - 1) : (a * b);

    cout << "Sonuc: " << sonuc << " | c: " << c << endl;
    
    return 0;
}

/*
    1 + 1 -> 0
    0 + 0 -> 1

*/