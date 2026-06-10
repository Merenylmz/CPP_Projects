#include <iostream>
using namespace std;

int main() {
    int N = 5;

    int** matris = new int*[N];

    for (int i = 0; i < N; i++) {
        matris[i] = new int[N];
    }

    matris[2][3] = 42; 
    cout << "Matris elemani: " << matris[2][3] << endl;


    for (int i = 0; i < N; i++)
    {
        delete[] *(matris+i);
    }
    
    delete[] matris;
    return 0;
}