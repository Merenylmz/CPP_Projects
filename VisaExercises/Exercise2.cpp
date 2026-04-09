#include <iostream>
#include <iomanip>

using namespace std;

int ** rotateMatrix90(int ** matrix, int rows, int cols){
    int** rotatedMatrix = new int*[cols];
    for (int i = 0; i < cols; i++) {
        rotatedMatrix[i] = new int[rows]; 
    }
    
    for (int i = 0; i < cols; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            rotatedMatrix[i][j]  = matrix[(rows-1-j)][i];
        }
    }
    
    
    return rotatedMatrix;
}

void printMatrix(int** matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << setw(3) << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void freeMatrix(int** matrix, int rows) {
    for (int i = 0; i < rows; i++) {
        delete[] matrix[i]; 
    }
    delete[] matrix;
}

int main(){
    int** originalMatrix = new int*[2];
    for (int i = 0; i < 2; i++) {
        originalMatrix[i] = new int[3];
    }

    int counter = 1;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            originalMatrix[i][j] = counter++;
        }
    }
    printMatrix(originalMatrix, 2,3);
    
    int** rotMatrix = rotateMatrix90(originalMatrix, 2, 3);
    cout << "\n";
    printMatrix(rotMatrix, 3,2);


    freeMatrix(originalMatrix, 2);
    freeMatrix(rotMatrix, 3);
    return 0;
}