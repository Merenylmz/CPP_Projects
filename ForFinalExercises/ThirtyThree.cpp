#include <iostream>
using namespace std;

int main() {
    int dizi[] = {100, 200, 300, 400};
    int* p = dizi;  

    int x = *p++;   
    int y = (*p)++; 
    int z = *++p;   

    cout << "x: " << x << endl;//100
    cout << "y: " << y << endl;//200
    cout << "z: " << z << endl;//300
    
    return 0;
}