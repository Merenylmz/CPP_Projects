#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream dosya("veriler.txt");
    int sayi = 0;
    int toplam = 0;

    if (!dosya.is_open())
    {
        cout << "dosya acilamadi" <<endl;
        return 0;
    }

    while (dosya >> sayi) {
        toplam += sayi;
    }
    
    cout << "Toplam: " << toplam << endl;

    // Soru: Ekrana "Toplam: 40" mı yazar, "Toplam: 80" mi yazar? Neden?
    return 0;
}
