#include <iostream>

using namespace std;

int main(){

    int *p = new int;
    *p = 5;
    cout << *p << endl;
    delete p; // veya 
    //p = NULL;

    //p = new int;
    *p = 6;
    cout << *p << endl;


    return 0;
}
