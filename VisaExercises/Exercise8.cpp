#include <iostream>

using namespace std;

int* pushBack(int* arr, int& size, int& capacity, int newValue){

    if (size < capacity)
    {
        arr[size] = newValue; 
        size ++;
        return arr;
    } 

    cout << "\n Alan Aciliyor \n";
    int* newArray = new int[(size*2)];
    for (int i = 0; i < size; i++)
    {
        newArray[i] = arr[i];
    }
    newArray[size] = newValue;
    capacity *= 2;
    size++;
    
    delete[] arr;
    return newArray;
}

int main() {
    
    int capacity = 2; 
    int size = 0;     
    int* dynamicArray = new int[capacity];

    cout << "Baslangic Durumu -> Boyut: " << size << ", Kapasite: " << capacity << "\n" << endl;

    for (int i = 1; i <= 5; i++) {
        dynamicArray = pushBack(dynamicArray, size, capacity, i * 10);
        
        cout << "Eklenen: " << i * 10 << " | Yeni Boyut: " << size 
             << " | Yeni Kapasite: " << capacity 
             << " | Dizi Adresi: " << dynamicArray << endl;
    }

    cout << "\nSonuc Dizisi:" << endl;
    for (int i = 0; i < size; i++) {
        cout << dynamicArray[i] << " ";
    }
    cout << "\n(Beklenen: 10 20 30 40 50)" << endl;

    delete[] dynamicArray;

    return 0;
}