#include <iostream>

using namespace std;

int main(){
    int number1 = 0, multiple = 1;
    cout << "Faktoriyel icin sayi giriniz: ";
    cin >> number1;

    for (int i = 1; i <= number1; i++)
    {
        multiple *= i; 
    }

    cout << "\n" << multiple << " Sayisi sonucudur.";
    
    return 0;
}