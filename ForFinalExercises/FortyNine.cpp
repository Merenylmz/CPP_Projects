#include <iostream>
using namespace std;

void veriyiParcala(unsigned short rawData, int& sensorID, int& temperature) {
    temperature = rawData & 0xFF;
    sensorID = rawData >> 8;
}

int main() {

    unsigned short signal = 1325; 
    
    int id = 0;
    int value = 0;

    veriyiParcala(signal, id, value);

    cout << "Sensor ID : " << id << endl;      
    cout << "Sicaklik  : " << value << endl;   
    return 0;
}