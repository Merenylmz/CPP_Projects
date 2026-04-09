#include <iostream>

using namespace std;

int* compressSensorData(const int* data, int size, int& newSize){
    int* newArray = new int[size];
    int lastNumber, counter = 1;
    newSize = 15;
    for (int i = 0; i < size; i++)
    {  
        if (lastNumber == data[i])
        {
            counter++;
            continue;
        } 
        if (counter != 1 && lastNumber == data[(i-1)])
        {
            cout << "\n"<< counter << " tane "<< lastNumber << " Sayisi var";
            newArray[(i-counter-1)] = lastNumber;
            counter = 1;
        }else {
            newArray[i] = lastNumber;
        }
        
        lastNumber = data[i];
    }
    
    return newArray;
}

int main() {
    cout << "--- SENSOR VERISI SIKISTIRMA (RLE) TESTI ---" << endl;
    
    int rawData[] = {5, 5, 5, 8, 8, 2, 2, 2, 2, 5, 7, 7, 9}; 
    int dataSize = 13;
    
    int finalSize = 0;
    
    int* compressedData = compressSensorData(rawData, dataSize, finalSize);
    
    cout << "\nOrijinal Veri: \n5 5 5 8 8 2 2 2 2 5 7 7 9" << endl;
    
    cout << "\nBeklenen Cikti (Boyut: 10): \n5 3 8 2 2 4 5 1 7 2 9 1" << endl;
    
    cout << "\nSenin Ciktin   (Boyut: " << finalSize << "): \n";
    for(int i = 0; i < finalSize; i++) {
        cout << compressedData[i] << " ";
    }
    cout << endl << endl;
    
    delete[] compressedData;
    return 0;
}