#include <iostream>

using namespace std;

int main(){

    int n = 0;
    cout << "sayi giriniz: ";
    cin>>n;
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            char letter = ' ';

            if ((j>=i && i+j <= n-1) ||(i>=j&& i+j>=n-1))
            {
                letter = '*';
            }
            cout<<letter;
        }
        cout<<endl;
    }
    
    

    return 0;
}