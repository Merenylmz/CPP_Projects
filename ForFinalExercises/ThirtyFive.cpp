#include <iostream>
using namespace std;

int main() {
    int x = 27; 
    int y = 6;  
    int z = 4;  

    int sonuc = x & ~(y | z); // 11001;  11001;

    cout << "Sonuc: " << sonuc << endl;
    
    return 0;
}