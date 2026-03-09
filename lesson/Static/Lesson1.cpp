#include <iostream>

using namespace std;


static void deneme(){
    static int counter = 0;
    counter++;
    cout << counter << endl;
}

int main(){

    
    return 0;
}