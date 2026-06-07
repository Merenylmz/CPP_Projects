#include <iostream>

using namespace std;

struct Measurement {
    int sensorID;
    double sicaklik;
};

int maxTemperatureSensor(Measurement* array){
    Measurement max;
    max.sensorID = 0;
    max.sicaklik=array->sicaklik;
    for (int i = 0; true; i++)
    {
        if ((array+i)->sensorID == -1)
        {
            break;
        }

        if (max.sicaklik < (array+i)->sicaklik)
        {
            max.sicaklik = (array+i)->sicaklik;
            max.sensorID = (array+i)->sensorID;
        }
    }
    return max.sensorID;    
}

int main(){
    Measurement* dummyData = new Measurement[6];
    dummyData[0] = {101, 24.5};
    dummyData[1] = {102, 28.1};
    dummyData[2] = {103, 22.9};
    dummyData[3] = {104, 31.4}; 
    dummyData[4] = {105, 19.8};
    dummyData[5] = {-1, 0.0};

    cout << "MAX:" << maxTemperatureSensor(dummyData)<<endl;

    return 0;
}//Besmele