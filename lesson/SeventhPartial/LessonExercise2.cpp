#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    const int size = 4;

    int notes[size];
    double noteHeavy[size] = {0.15, 0.15, 0.3, 0.4}, sum = 0;

    int i = 0;
    while (i < 4)
    {
        cout << "\n"<< (i+1) << ".Elemani giriniz: ";
        cin >> notes[i];
        i+=1;
    }
   for (int a = 0; a < 4; a++)
   {
        sum += (notes[i]+(notes[i] * noteHeavy[i]));
   }
   
    cout<< fixed << setprecision(2)<< "Agirlikli Toplam: "<< sum;

    return 0;
}