#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *p = arr;          // p, arr'nin başlangıcını gösteriyor *p=10
    int *q = arr + 4;      // q, arr'nin son elemanını gösteriyor *q = 50

    int a = *++p;   //20  *p = 20    
    int b = *q--;   //50 *q=40
    int c = ++*p;   //21 *p=21       
    int d = (*q)++;  //40 *q=41       

    cout << "a: " << a << ", b: " << b << ", c: " << c << ", d: " << d << endl;
    cout << "arr[1]: " << arr[1] << ", arr[3]: " << arr[3] << endl;
    
    return 0;
}