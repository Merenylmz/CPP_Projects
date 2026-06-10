#include <iostream>
using namespace std;

struct Node {
    int veri;
    Node* sonraki;
};

void listeyiKompleSil(Node* baslangic) {
    Node* suAnki = baslangic;
    Node* yedekAdres = nullptr;

    while ( suAnki != nullptr ) { 
        
        yedekAdres = suAnki->sonraki; 
        delete[] suAnki; 
        
        suAnki = yedekAdres; 
    }
}