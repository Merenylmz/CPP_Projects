#include <iostream>

using namespace std;

int findMax(int* array, int size){
    int i = 0;

    int max = *(array + i);

    for (; i < size; i++)
    {
        if (*(array + i) > max)
        {
            max = *(array + i);
        }
    }
    return max;
}

int main(){
    int deneme[5] = {6, 7 , 899 , 9 ,99};

    cout << findMax(deneme, 5) << endl;
    

    return 0;
}//Besmele