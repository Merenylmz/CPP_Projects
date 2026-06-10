#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void filterDangers() {
    ifstream readFile("ajanlar.txt");
    ofstream writeFile("tecrubeliajanlar.txt");

    if (!readFile.is_open() || !writeFile.is_open())
    {
        return;
    }
    
    string name;
    int degree;
    while (readFile >> name >> degree)
    {
        if (degree > 7)
        {
            writeFile << name <<" "<< degree<<endl;
        }
    }
}

int main() {
    ofstream dummyFile("ajanlar.txt");
    dummyFile << "Kartal 5" << endl;
    dummyFile << "Golge 9" << endl;
    dummyFile << "Sahin 8" << endl;
    dummyFile << "Timsah 3" << endl;
    dummyFile.close();

    filterDangers();
    
    cout << "Filtreleme bitti. tehlikeli_ajanlar.txt dosyasini kontrol et." << endl;
    return 0;
}