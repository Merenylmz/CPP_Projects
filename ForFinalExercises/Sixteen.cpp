#include <iostream>

using namespace std;

void shiftTheArrayToTheRight(int* array, int size, int k){
    for (int i = 0; i < size; i++)
    {
        if (i == k)
        {
            break;
        }

        int quantity = k-i; 
        int temp = *(array+i);
        *(array+i) = *(array+size-quantity);
        //*(array+size-1-i) = temp;
    }
    cout << "[";
    for (int j = 0; j < size; j++)
    {
        cout<<" " << *(array+j)<<" ";
    }
    cout << "]";
    cout <<endl;
}


int main(){
    int numArray[7] = {1, 2, 3, 4, 5, 6, 7};
    int k = 0;
    cout << "Oteleme miktarini giriniz: ";
    cin >> k;
    
    shiftTheArrayToTheRight(numArray, 7, k);

    return 0;
}//Besmele