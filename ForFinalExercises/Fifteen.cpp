#include <iostream>
using namespace std;

//COK GUZEL BIR SORU DAHA

int main() {
    int hedefX = 150;
    int hedefY = 300;
    
    int* pX = &hedefX;
    int* pY = &hedefY;
    int** anaRadar = &pX;

    **anaRadar = 200;  //hx=200   
    *anaRadar = pY;    //px=py
    **anaRadar = 450;  // hx=450
    *pX = 250;          //hy=250   

    cout << "Hedef X: " << hedefX << " | Hedef Y: " << hedefY << endl;
    return 0;
}