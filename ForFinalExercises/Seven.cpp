#include <iostream>
#include <vector>

using namespace std;

int* filteredSensorValues(int* data, int size, int positiveNumbers){
    int* filteredValues = new int[positiveNumbers];
    int j = 0;

    for (int i = 0; i < size; i++)
    {
        if (data[i] >= 0)
        {
            filteredValues[(j)] = data[i];
            j++;
        }
    }
    
    return filteredValues;
}


int main() {
    int sensorData[] = {-3, 15, 0, -8, 42, 17, -1};

    int counter = 0;

    for (int i = 0; i < 7; i++)
    {
        if (sensorData[i] >= 0)
        {
            ++counter;
        }
    }

    int* filteredArray = filteredSensorValues(sensorData, 7, counter);
    for (int j = 0; j<counter; j++)
    {
        cout << *(filteredArray+j) << endl;
    }
    delete[] filteredArray;
    return 0;
}













/*
vector<int> filteredSensorValues(int* data, int size){
    vector<int> newVector;

    for (int i = 0; i < size; i++)
    {
        if (data[i] >= 0)
        {
            newVector.push_back(data[i]);
        }
    }
    return newVector;
}


int main(){
    int sensorData[] = {-3, 15, 0, -8, 42, 17, -1};
    vector<int> filteredValues = filteredSensorValues(sensorData, 7);

    for (const int& value : filteredValues)
    {
        cout << value << endl;
    }
    return 0;
}*/