#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream writeFile("deneme.txt", ios::app);
    ifstream readFile("deneme.txt");

    if (!writeFile.is_open())
    {
        cout << "Dosya acilamadi"<<endl;
        return 0;
    }

    for (int i = 0; i < 10; i++)
    {
        //writeFile << (i+1)<<".Line " <<endl;
    }
    
    writeFile.close();


    string allLine;

    if (!readFile.is_open())
    {
        cout << "Dosya acilamadi"<<endl;
        return 0;
    }

    while (getline(readFile, allLine))
    {
        cout << allLine<<endl;
    }
    
    readFile.close();

    return 0;
}