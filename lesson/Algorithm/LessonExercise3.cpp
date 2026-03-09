#include <iostream>

using namespace std;


int main(){

    for (size_t i = 20; i <= 40; i++)
    {
        cout << i<< " bolenleri: ";
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                cout << j;
                cout << " ";
            }
        }

        cout << "\n";        
    }
    

    
    return 0;
}