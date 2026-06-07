#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<string> vCars = {"Opel", "Toyota", "Audi"};

    for (const string& car: vCars)
    {
        cout << car << " ";
    }
    
    cout << endl;

    return 0;
}//Besmele

