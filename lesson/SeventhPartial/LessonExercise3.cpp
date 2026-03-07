#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int array1[3][2], array2[3][2], sumArray[3][2];

    for (int i = 0; i < 3; i++)
    {
        for (int a = 0; a < 2; a++)
        {
            cout << "\n1.dizi "<< (i+1) << ".satir " << (a+1) << ".sutundaki Sayiyi giriniz: ";
            cin >> array1[i][a];

            cout << "\n2.dizi "<< (i+1) << ".satir " << (a+1) << ".sutundaki Sayiyi giriniz: ";
            cin >> array2[i][a];
        }
        
    }
    for (int i = 0; i < 3; i++)
    {
        for (int a = 0; a < 2; a++)
        {
            sumArray[i][a] = 0;
            sumArray[i][a] += array1[i][a] + array2[i][a];
            cout << "\n"<< (i+1) << ".satir " << (a+1) << ".sutundaki Sayi: " << sumArray[i][a];
        }
    }
    return 0;
}