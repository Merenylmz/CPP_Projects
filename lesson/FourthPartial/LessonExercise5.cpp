#include <iostream>

using namespace std;

int main(){

    int number = 0;
    cout << "Sayi giriniz: ";
    cin >> number;

    for (int i = 1; i <= number; i++)
    {
        for (int a = 0; a < i; a++)
        {
            cout << i;
        }
        cout << "\n";
    }
    

    return 0;
}