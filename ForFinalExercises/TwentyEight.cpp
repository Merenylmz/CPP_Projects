#include <iostream>

using namespace std;

int deleteRepeats(int* array, int size) {
    if (size == 0) return 0;
    int counter = 1; 

    int prevNum = array[0];
    for (int i = 0; i < size; i++)
    {
        if (i != 0)
        {
            if (array[i] == prevNum)
            {
                counter ++;
            } else {
                int deneme = i-counter;
                array[(i-counter+1)] = array[i];
            }
        }
        prevNum = array[i];
    }
    
    return counter-1;
}

int main(){

    int array[] = {1, 1, 2, 2, 2, 3, 4, 4, 5, 5};
    int oldSize = 10;

    int newSize = deleteRepeats(array, oldSize);

    cout << "Yeni Boyut: " << newSize << endl;
    cout << "Benzersiz Dizi: ";
    for(int i = 0; i < newSize; i++) {
        cout << array[i] << " ";
    }

    return 0;
}