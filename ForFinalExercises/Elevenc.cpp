#include <iostream>
#include <vector>

using namespace std;

vector<int> combineVectors(const vector<int>& v1, const vector<int>& v2){
    vector <int> combined;
    for (const int num1: v1)
    {
        combined.push_back(num1);
    }
    for (const int num2: v2)
    {
        combined.push_back(num2);
    }
    return combined;
}


int main(){
    vector<int> v1 = {1, 2, 3};
    vector<int> v2 = {4, 5, 6, 7};
    
    for (int n:combineVectors(v1, v2))
    {
        cout << n<<endl;
    }
    
    return 0;
}//Besmele


int* combineArray(int* array1, int size1, int* array2, int size2){
    int* newArray = new int[(size1+size2)];
    int i = 0;
    for (; i < size1; i++)
    {
        newArray[i] = array1[i];        
    }
    i = 0;
    for (int j = size1; j < size1+size2; j++)
    {
        newArray[j] = array2[i];
        i++;
    }
    
    return newArray;
}

int main() {
    int d1[3] = {1, 2, 3};
    int d2[4] = {4, 5, 6, 7};
    
    int* newArr = combineArray(d1, 3, d2, 4);

    for (int a = 0; a < 7; a++)
    {
        cout << newArr[a] << endl;
    }
    

    delete[] newArr;
    return 0;
}
