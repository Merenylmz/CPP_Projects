#include <iostream>
#include <iomanip>

using namespace std;


int main(){

    int x = 7;
    int y = x++;

    
    cout << y << endl;

    int a = 5;
    int b = ++a;
    cout << b << endl;

    return 0;
}