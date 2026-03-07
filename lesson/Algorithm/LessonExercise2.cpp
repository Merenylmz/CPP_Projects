#include <iostream>
#include <cmath>

using namespace std;


int main(){

    int number = 0, counter = 0;

    cout << "Sayi giriniz: ";
    cin >> number;

    for (int a = 0; a < number; a++)
    {
        if (number % (int)pow(10.0, (double)a) != number)
        {
            counter ++;
        }
        
    }
    cout << "\n" << counter;

    


    cout << endl;
    return 0;
}