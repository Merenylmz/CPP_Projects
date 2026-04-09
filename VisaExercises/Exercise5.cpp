#include <iostream>
#include <iomanip> 

using namespace std;

int** generatePascalTriangle(int numRows){
    int **array = new int*[numRows];
    
    for (int i = 0; i < numRows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            array[j] = new int();
        }
    }

    for (int i = 0; i < numRows; i++)
    {
        array[i][0] = 1;
        for (int j = 0; j < i; j++)
        {
            array[i][(j+1)] = 0;
            //array[i][j] = 1;
        }
    }

    return array;
}

void freeJaggedArray(int** arr, int numRows) {
    if (arr == nullptr) return;
    for (int i = 0; i < numRows; i++) {
        delete[] arr[i]; 
    }
    delete[] arr; 
}

int main() {
    cout << "--- JAGGED ARRAY: PASCAL UCGENI TESTI ---" << endl;
    
    int rowNumber = 5;
    
    int** pascal = generatePascalTriangle(rowNumber);

    cout << "\nBeklenen Cikti (5 Satir):" << endl;
    cout << "             1" << endl;
    cout << "           1   1" << endl;
    cout << "         1   2   1" << endl;
    cout << "       1   3   3   1" << endl;
    cout << "     1   4   6   4   1" << endl;

    cout << "\nSenin Ciktin:" << endl;
    if (pascal != nullptr) {
        for (int i = 0; i < rowNumber; i++) {
            for (int bosluk = 0; bosluk < rowNumber - i; bosluk++) {
                cout << "  "; 
            }
            
            for (int j = 0; j <= i; j++) {
                cout << setw(4) << pascal[i][j];
            }
            cout << endl;
        }
    }

    freeJaggedArray(pascal, rowNumber);

    return 0;
}