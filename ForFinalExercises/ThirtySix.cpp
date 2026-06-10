#include <iostream>
using namespace std;

int main() {
    int dizi[] = {5, 10, 15, 20, 25};
    
    int* ptr = &dizi[1]; 

    int sonuc = (*(ptr + 2) * *ptr) / 2;

    cout << "Sonuc: " << sonuc << endl;
    
    return 0;
}