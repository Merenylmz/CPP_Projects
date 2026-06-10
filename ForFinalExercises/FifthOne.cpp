#include <iostream>
using namespace std;

void diziyiTersCevir(int* dizi, int boyut) {
    int* sol = dizi; 
    int* sag = dizi+boyut-1; 

    while (sol <= sag) { 
        
        int temp = *sol;
        *sol = *sag;
        *sag = temp;

        sol++; 
        sag--; 
    }
}