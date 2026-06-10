#include <iostream>

using namespace std;

template <typename T>
T enBuyuguBul(T x, T y) {
    return (x > y) ? x : y;
}

int main() {
    //cout << enBuyuguBul<int>(10, 50); // Ekrana 50 yazar, sorun yok.
    
    // PEKİ BURADA NE OLUR?
    const char* kelime1 = "Zebra";
    const char* kelime2 = "Aslan";
    
    cout <<"Xkelime1'in adresi: " <<&kelime1 <<endl;
    cout <<"kelime2"<< &kelime2 <<endl;
    cout << enBuyuguBul<const char*>(kelime1, kelime2)<<endl; 
    
    return 0;
}