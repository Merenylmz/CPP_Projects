#include <iostream>

using namespace std;

int main(){
    int N = 0;
    cout << "sayi giriniz: ";
    cin>>N;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            char letter = ' ';

            if (i == 0 || j == 0 || i == (N-1) || j == (N-1) || i == j || i == (N/2) || j == (N/2) || i == (N-j-1))
            {
                letter = '*';
            }
            cout <<letter;
        }
        cout << endl;
    }
    
    

    return 0;
}