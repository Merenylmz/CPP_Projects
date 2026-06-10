#include <iostream>
using namespace std;

int main() {
    int x = 12, y = 4, z = 21;
    
    
    z = (x % y == 0) ? (x * y) - (z / 3) : (x * y);
    
    cout << "z'nin degeri: " << z << endl; // ÇIKTI: 41
    
    return 0;
}