#include <iostream>
using namespace std;

void clearParasite(char* str) {
    char* reader = str;
    char* writer = str;

    while (*reader != '\0')
    {
        if (*reader != '#')
        {
            *writer = *reader;
            writer++;
        }
        reader++;
    }
    *writer = '\0';
}

int main() {
    char sensorData[] = "K#T#U##B#i#lgi##sayar";
    
    cout << "Gelen Veri  : " << sensorData << endl;
    
    clearParasite(sensorData);
    
    cout << "Temiz Veri  : " << sensorData << endl;
    // Ekranda "KTUBilgisayar" yazmali!

    return 0;
}