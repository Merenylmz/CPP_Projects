#include <iostream>

using namespace std;

void reverseArray(int arr[4]){
    for (int a = 0; a < 4; a++)
    {
        cout << arr[a] << " ";
    }
    
}

int main(){
    int array[4];

    for (int i = 0; i < 4; i++)
    {
        cout << "\n" << (i+1) << ".sayiyi giriniz: ";
        cin >> array[i];
    }
    reverseArray(array);
    cout << endl;
    return 0;
}