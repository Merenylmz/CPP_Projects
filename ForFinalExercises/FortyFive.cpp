#include <iostream>
using namespace std;

int main() {
    int x = 4;
    int y = 8;
    int arr[] = {10, 20, 30};
    int* ptr = arr; 

    
    int sonuc = (x-- == 4 || ++y == 9) ? (*++ptr) : (*ptr++);//x=3 y=8 sonuc=20 

    cout << "sonuc: " << sonuc << endl;
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
    cout << "Dizinin ilk elemani (arr[0]): " << arr[0] << endl;//10

    return 0;
}