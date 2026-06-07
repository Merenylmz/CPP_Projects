#include <iostream>

using namespace std;

int main(){ 
    int number = 0;
    for (int i = 0; true; i++)
    {
        cout<< "Sayi giriniz:"; 
        cin >> number;

        if (number >= 5 && ((number%2)!=0))
        {
            break;
        }
    }

    for (int i = 0; i < number; i++)
    {
        for (int j = 0; j < number; j++)
        {
            char letter = ' ';

            if(i == 0||i == (number-1)|| j==(number-1)||j==0 || i == (number/2) || j == (number/2)){
                letter = '*';
            }
            cout << letter; 
        }
        cout << endl;
    }
    

    return 0;
}