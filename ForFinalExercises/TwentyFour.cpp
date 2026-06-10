#include <iostream>

using namespace std;

int* oddNumberFilter(int* oldArray, int oldSize, int& newSize){
    newSize = 0;
    for (int i = 0; i < oldSize; i++)
    {
        if (oldArray[i] % 2 != 0)
        {
            newSize++;
        }
    }

    int* newArray = new int[newSize];
    int counter = 0;
    for (int i = 0; i < oldSize; i++)
    {
        if (oldArray[i] % 2 != 0)
        {
            newArray[counter] = oldArray[i];
            counter ++;
        }
    }
    
    return newArray;
}


int main(){
    int size = 6;
    int* numbers = new int[size]{12, 5, 8, 21, 33, 40};
    int oddNumberQuantity = 0;
    int newSize = 0;
    

    int* newArr = oddNumberFilter(numbers, 6, newSize);

    for (int a = 0; a < newSize; a++)
    {
        cout << newArr[a] <<endl;
    }
    
    delete[] newArr;
    delete[] numbers;
    return 0;
}