#include <iostream>
#include <random>
using namespace std;

int main(){
    random_device rd; // Rastgele Donanımdan veri alır. (RNG)
    mt19937 motor(rd()); // Mersenne Twister Algorithm
    uniform_real_distribution<double> urd(0.0, 9.9);

    double randNumber = urd(motor);

    cout << randNumber << endl;
    

    return 0;
}