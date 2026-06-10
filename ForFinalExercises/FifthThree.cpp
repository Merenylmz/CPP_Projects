#include <iostream>
using namespace std;

int main() {
    int dizi[] = {5, 10, 15, 20, 25};
    int* ptr = dizi; //5

    int a = *ptr++; // a = 5
    int b = *++ptr; // b = 15
    int c = ++*ptr; // c = 16

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "c: " << c << endl;
    
    return 0;
}