#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int randomNumberGenerator(int min, int max){
    srand(time(0));

    return min + (rand() % (max - min)+1);
}
int main(){

    int min, max;

    cout << "Min deger nedir: ";
    cin >> min;
    cout << "\nMax deger nedir: ";
    cin >> max;
    int rn = 0;
    for (int i = 0; i < 10; i++)
    {
        rn = randomNumberGenerator(min, max);
        cout << "\n"<<rn;
        _sleep(1000);
    }

    return 0;
}