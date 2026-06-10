#include <iostream>
using namespace std;

int main() {
    char kelime[] = "KODLAMA";
    char* p = kelime; 

    cout << *p << endl;       // 1. Cikti // K
    cout << *(p + 3) << endl; // 2. Cikti // L
    cout << *++p << endl;     // 3. Cikti (Dikkat!) // O
    cout << *p++ << endl;     // 4. Cikti (Cok Dikkat!)//O
    cout << *p << endl;       // 5. Cikti//D

    return 0;
}