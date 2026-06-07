#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vNumbers;
    vNumbers.push_back(50);
    vNumbers.push_back(55);
    vNumbers.push_back(60);

    cout << "Vector Size: " << vNumbers.size()<<endl;

    for (int i = 0; i < vNumbers.size(); i++)
    {
        cout << "Eleman " << i << " : " << vNumbers[i] << endl;
    }

    return 0;
}