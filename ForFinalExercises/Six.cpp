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
            string letter = " ";
            
            if (i == 0 || i == (number-1) || i == j || j == 0 || j == number-1 || (i+j) == (number-1))
            {
                letter = "*";
            }
            
            cout << letter;
        }
        cout << "\n";
    }
    

    return 0;
}//Besmele