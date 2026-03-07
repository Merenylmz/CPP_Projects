#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int notes[4];

    for (int i = 0; i < 4; i++)
    {
        cout << "\n"<< i+1 << ".notu giriniz:";
        cin >> notes[i];
    }


    int sum = 0;
    for (int i = 0; i < 4; i++)
    {
        sum += notes[i];
    }

    cout << fixed << setprecision(2) << "\n " << sum/4; 
}