#include <iostream>

using namespace std;

int main(){

    unsigned char PORT_A = 0; // Binary olarak: 0000 0000    0001 0000
    PORT_A |= 1<<4;

    return 0;
}