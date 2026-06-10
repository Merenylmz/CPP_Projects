#include <iostream>

using namespace std;

int* findIntersection(int* a1, int size1, int* a2, int size2, int& newSize){
    int* tempArray = new int [size1];
    int commonCounter = 0; 
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if (a1[i] == a2[j])
            {
                tempArray[commonCounter] = a2[j]; 
                ++commonCounter;
            }
        }
    }
    newSize = commonCounter;
    return tempArray;
}

int main(){

    int array1[] = {1, 3, 4, 5, 7, 9};
    int array2[] = {2, 3, 5, 6, 9, 11};
    int commonQuantity = 0;

    int* result = findIntersection(array1, 6, array2, 6, commonQuantity);

    for (int a = 0; a < commonQuantity; a++)
    {
        cout << result[a]<<endl;
    }
    


    delete[] result;
    return 0;
}