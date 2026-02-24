#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    srand(time(0));

    int randomNumber = rand();

    int randomNumber2 = (rand() % 10)+1; // 1 - 10  
    int randomNumber3 = (rand() % 100)+1; // 1 - 100  

    cout << randomNumber2 << endl;
    cout << randomNumber3 << endl;
    cout << randomNumber;
    return 0;
}