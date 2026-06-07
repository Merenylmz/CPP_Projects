#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> v(5, 0);
    for (int i = 1; i <= 5; i++)
    {
        v[(i-1)] = i; 
    }

    for (int& num:v)
    {
        cout << num << endl;
    }

    cout << "\n\n";
    v.pop_back();

    v.erase(v.begin()+2);

    for (int& num:v)
    {
        cout << num << endl;
    }
    
    
    
    v.clear();
    for (int& num:v)
    {
        cout << num << endl;
    }
    return 0;
}