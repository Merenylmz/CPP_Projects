#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    double value = 123.45678;

    cout << value << endl;
    cout << setprecision(5) << value << endl;
    cout << fixed << setprecision(2) << value << endl;

    return 0;
}