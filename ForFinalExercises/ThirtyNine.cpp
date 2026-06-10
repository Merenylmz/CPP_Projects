#include <iostream>
#include <fstream>

using namespace std;

void reportMaximumAltitude(){
    ifstream readFile("flights_log.txt");
    if(!readFile.is_open()) return;

    int id, altitude, max;
    readFile >> id >> max;

    while (readFile >> id >> altitude)
    {
        if (max < altitude)
        {
            readFile >> id >> max;
        }
    }

    ofstream writeFile("max_log.txt");
    if(!writeFile.is_open()) return;
    writeFile << max;
}


int main(){
    ofstream dummyLog("flights_log.txt", ios::app);
    dummyLog << 10 << " " << 120 << endl;
    dummyLog << 20 << " " << 340 << endl;
    dummyLog << 30 << " " << 850 << endl;
    dummyLog << 40 << " " << 410 << endl;
    dummyLog.close();

    reportMaximumAltitude();
    

    return 0;
}