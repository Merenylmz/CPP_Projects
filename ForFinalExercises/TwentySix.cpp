#include <iostream>

using namespace std;

int main(){

    int number = 0;
    cout << "Sayi giriniz: ";
    cin >> number;

    for (int i = 0; i < number; i++)
    {
        for (int j = 0; j < number; j++)
        {
            char letter = ' ';

            if (i == j || i == (number-j-1))
            {
                letter = '*';
            }
            cout << letter;
        }
        cout << endl;
    }
    

    return 0;
}//Besmele