#include <iostream>

using namespace std;

int main(){

    int bolunen, bolen;

    cout << "Lutfen bolunen sayiyi giriniz: ";
    cin >> bolunen;
    cout << "\nLutfen bolen sayiyi giriniz: ";
    cin >> bolen;

    int sonuc;
    try
    {
        if (bolen == 0)
        {
            throw 99;
        }
        
        sonuc = bolunen / bolen;
        
    }
    catch(int errCode)
    {
        cout << errCode;
        throw;
    }
    cout << "\n sonuc: " << sonuc;

    return 0;
}