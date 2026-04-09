#include <iostream>


using namespace std;

int* mergeAndFilter(const int* arr1, int size1, const int* arr2, int size2, int& newSize){
    int* newArray = new int[size1+size2]();
    newSize = size1+size2;
    int lastItem, counter;
    for (int i = 0; i < size1; i++)
    {
        if (lastItem == arr1[i])
        {
            counter++;
            continue;
        }
        
        newArray[(i-counter)] = arr1[i];
        lastItem = arr1[i];
    }
    counter = 0;

    for (int j = 0; j < size2; j++)
    {
        if (lastItem == arr2[j])
        {
            counter++;
            continue;
        }
        
        newArray[(size1+j-counter-2)] = arr2[j];
        lastItem = arr2[j];
    }
    return newArray;
}

int main(){
    int array1[] = {1, 3, 3, 5, 7, 9, 9}; 
    int size1 = 7;
    
    int array2[] = {2, 3, 4, 5, 5, 8, 10,11};
    int size2 = 8;

    int finalSize = 0;

    int* newArr = mergeAndFilter(array1, size1, array2, size2, finalSize);

    for (int a = 0; a < finalSize; a++)
    {
        cout << newArr[a] << "\n";
    }
    cout << "\n\n" << finalSize<< endl;
    delete newArr;
    return 0;
}