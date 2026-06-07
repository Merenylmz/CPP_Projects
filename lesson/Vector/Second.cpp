#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> vNumbers;
    vNumbers.push_back(50);
    vNumbers.push_back(55);
    vNumbers.push_back(60);


    for (int i = 0; i < vNumbers.size(); i++)
    {
        cout << "Eleman " << i << " : " << vNumbers[i] << endl;
    }

    cout << endl;
    vNumbers.insert(vNumbers.begin()+1, 15);
    for (int& num: vNumbers)
    {
        cout << num<< endl;
        num = num+1;
    }
    

    return 0;
}