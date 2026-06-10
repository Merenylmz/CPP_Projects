#include <iostream>

using namespace std;

int main(){
    int number = 5;
    // for (int i = 0; true; i++)
    // {
    //     cout<< "Sayi giriniz:"; 
    //     cin >> number;

    //     if (number >= 5 && ((number%2)!=0))
    //     {
    //         break;
    //     }
    // }

    for (int i = 0; i < number; i++)
    {
        for (int j = 0; j < number; j++)
        {
            char letter = ' ';
            if (i + j == number/2 || i-j==number/2 || j-i == number/2 || i + j == 3*(number/2))
            {
                letter = '*';
            }
            cout << letter;
        }
        cout << endl;
    }
    

    return 0;
}//Besmele