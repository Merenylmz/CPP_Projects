// #include <iostream>
// using namespace std;

// int main() {
//     int x = 17;
//     int y = 5;
    
//     int z = (x % y == 2) ? (x + y) + 3 : (x | y);

//     cout << "Sonuc: " << z << endl;

//     return 0;
// }

#include <iostream>
using namespace std;

void islemYap(int* x, int& y, int z) {
    *x = *x + 5;   
    y = y * 2;     
    z = z + 100;   
}

int main() {
    int a = 10;
    int b = 20;
    int c = 30;

    islemYap(&a, b, c);

    cout << "a = " << a << endl; // 15
    cout << "b = " << b << endl; // 40
    cout << "c = " << c << endl; // 30
    

    return 0;
}