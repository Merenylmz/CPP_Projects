#include <iostream>
using namespace std;


//COK GUZEL SORU LA
int main() {
    int x = 10;
    int y = 20;
    
    int* p1 = &x;
    int* p2 = &y;
    int** ciftOk = &p1;

    **ciftOk = 15;        // 1. İşlem // x=15
    *ciftOk = p2;         // 2. İşlem
    **ciftOk = 35;        // 3. İşlem // y=35
    *p1 = 50;             // 4. İşlem//y=50

    cout << "x: " << x << ", y: " << y << endl;
    return 0;
}