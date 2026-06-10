#include <iostream>

using namespace std;

int main(){

    int m = 5;
    int n = 0;
    int k = 10;

    // ^ yerine != olabilir.
    int sonuc = (m ^ 5 && ++n) ? (k++) : (m);

    cout << "Sonuc: " << sonuc << " | n: " << n << " | k: " << k << endl;
    
    return 0;

    return 0;
}