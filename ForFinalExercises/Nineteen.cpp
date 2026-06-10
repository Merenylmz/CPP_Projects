#include <iostream>

using namespace std;

int* myPushBack(int* oldArr, int oldSize, int newNumber){
    int newSize = oldSize*2;
    int* tempArray = new int[newSize];

    for (int i = 0; i <= oldSize; i++)
    {
        if (i == oldSize)
        {
            tempArray[i] = newNumber;
            break;
        }
        
        tempArray[i] = oldArr[i];
    }

    return tempArray;
}


int main(){
    int size = 3;
    int* array = new int[size]{10,20,30};

    int* newArray = myPushBack(array, size, 40);
    for(int i = 0; i < 4; i++) { 
        cout << newArray[i] << " ";
    }

    return 0;
}//Besmele