#include <iostream>
using namespace std;

int main() {
    int dizi[] = {10, 20, 30, 40, 50};
    
    int* ptr1 = dizi;   // 10     
    int* ptr2 = &dizi[4];//50

    int sonuc = (ptr2 - ptr1) + *(ptr1 + 2);

    cout << "Sonuc: " << sonuc << endl;

    return 0;
}