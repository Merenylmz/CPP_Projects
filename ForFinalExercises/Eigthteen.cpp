#include <iostream>
using namespace std;

int main() {
    int dizi[] = {10, 20, 30, 40, 50, 60};
    
    int* ptr = (dizi + 3); 
    
    int a = ptr[-2];//20
    int b = *ptr; // 40
    int c = ptr[1];//50

    cout << a << " " << b << " " << c << endl;
    
    return 0;
}