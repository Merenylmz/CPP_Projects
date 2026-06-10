#include <iostream>
using namespace std;

void diziOlustur(int*& ptr) {
    ptr = new int[3];   
    ptr[0] = 10;
    ptr[1] = 20;
    ptr[2] = 30;
}
//COK IYI SORU
int main() {
    int* anaPointer = nullptr; 

    diziOlustur(anaPointer);
    
    if (anaPointer != nullptr) {
        cout << "Ilk eleman: " << anaPointer[0] << endl;
        delete[] anaPointer;
    } else {
        cout << "SISTEM COKTU: Pointer hala NULL!" << endl;
    }

    /*Eğer pointer sadece RAM'deki mevcut verilere bakacaksa veya içindeki sayıyı değiştirecekse normal int* ptr yeterlidir.
Ama pointer'ın baktığı adresi kökten değiştireceksen (yeni new ataması, adresi nullptr'a çekmek vb.) ve bunun main'de de geçerli olmasını istiyorsan silahın her zaman *& olmalıdır!*/
    return 0;
}