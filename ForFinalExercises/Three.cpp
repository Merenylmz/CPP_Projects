#include <iostream>
using namespace std;


void reverseArray(int* array, int size){

    int tempValue;
    for (int i = 0; i < size; i++)
    {   
        if (i < size/2)
        {
            tempValue = array[i];
            array [i] = array[(size - i -1)];
            array[(size - i -1)] = tempValue;
        }else break;
             
    } 
}
int main() {
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8};
    reverseArray(arr, 9);
    return 0;
}

