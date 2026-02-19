#include <iostream>
#include <iomanip>

using namespace std;


int main(){
    int note1, note2, note3;
    double average;

    cout << "1.Notu giriniz: ";
    cin >> note1;
    cout << "\n2.Notu giriniz: ";
    cin >> note2;
    cout << "\n3.Notu giriniz: ";
    cin >> note3;

    average = (double) (note1 + note2 + note3) / 3;


    cout << fixed << setprecision(2) << "1.Yazim ile Ortalamanız: " << average << endl;
    cout << setprecision(2) << "2.Yazim ile Ortalamanız: " << ((int)average) << endl;


    return 0;
}