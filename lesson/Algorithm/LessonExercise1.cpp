#include <iostream>
#include <cmath>
#include <chrono>


using namespace std;

int main(){

    int number = 0;
    cout << "Bir tam sayi giriniz: ";
    cin >> number;

    chrono::steady_clock::time_point begin = chrono::steady_clock::now();
    for (int a = 1; a <= number; a++)
    {
        int counter = 0;
        for (int i = 1; i <= a; i++)
        {
            if (a % i == 0)
            {
                counter+=1;
            }
            if (counter > 2)
            {
                break;
            }
        }
        if (counter == 2)
        {
            cout << "\n" << a;
        }
    }
    chrono::steady_clock::time_point end = chrono::steady_clock::now();


    cout << "\n\n\nTime Duration: " << chrono::duration_cast<chrono::microseconds>(end-begin).count();
    cout << endl;
    return 0;
}