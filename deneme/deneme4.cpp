#include <iostream>
#include <iomanip>

using namespace std;

const int ROOM = 4;
const int FLOOR = 5;
const int CLOCK = 8;


double average(const double data[], int n){
    double avg = 0.0;

    for (int i = 0; i < n; i++)
    {
        avg += data[i];
    }
    return avg / (double)n;
}

double average(const int data[], int n){
    double avg = 0;

    for (int i = 0; i < n; i++)
    {
        avg += data[i];
    }
    return avg / (double)n;
}

int anormalNumbers(const double temperature[], int n, double minLimit, double maxLimit){
    int counter = 0;
    for (int i = 0; i < n; i++)
    {
        if (temperature[i] < minLimit || temperature[i] > maxLimit)
        {
            counter += 1;
        }
    }
    return counter;
}

void printWarning(const double temperature[], int n, double minLimit, double maxLimit){
    int counter = 0;
    for (int i = 0; i < n; i++)
    {
        if (temperature[i] < minLimit || temperature[i] > maxLimit)
        {
            cout << "\n" << setprecision(2) << fixed << i << ".indexdeki eleman aralik disinda verisi ise: "<< temperature[i]<< "\n";
        }
    }
}

void reportFloor(const double temperatures[][4], int floorNumber){
    for (int i = 0; i < floorNumber; i++)
    {
        double avg = 0;
        for (int j = 0; j < 4; j++)
        {
            avg += temperatures[i][j];
        }
        
        cout << "\n" << setprecision(2) << fixed << (i+1) << ".katin odalarinin sicaklik ortalamasi: " << (avg/floorNumber)<< "\n";
    }
}

int maxIndex(const double data[], int n){
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if (data[max] < data[i])
        {
            max = i;
        }
    }
    return max;
}

int main(){
    double temperature[] = {21.5, 22.0, 25.5, 29.3, 30.1, 27.8, 23.0, 21.0};
    double floorRoom[FLOOR][ROOM] = {
        {22.1, 23.4, 21.8, 24.0},
        {20.5, 19.8, 21.2, 20.9},
        {25.6, 26.2, 24.8, 25.1},
        {18.2, 17.9, 18.5, 19.0},
        {23.0, 22.8, 23.5, 22.6}
    };
    double co2[] = {412.5, 680.3, 1250.8, 520.1, 890.4};
    double thisWeek[] = {120.5, 118.3, 125.7, 122.1, 119.8, 131.2, 128.6};
    double lastWeek[] = {115.2, 117.0, 119.8, 121.5, 118.4, 125.3, 124.1};

    cout << setprecision(2) << fixed<<"Sicaklik Ortalamasi: " << average(temperature, 8)<<"\n";
    cout << "Anormal sicaklik sayisi: " << anormalNumbers(temperature, 8, 18, 28)<<"\n";
    printWarning(temperature, 8, 18, 28);
    reportFloor(floorRoom, 5);
    int index = maxIndex(co2, 5);
    cout << "\n"<< index << ".odanin CO2 seviyesi kritik!!!" << "\n";
    double lastAvg = average(lastWeek, 7);
    double thisAvg = average(thisWeek, 7);
    double changeNatio = (100*(thisAvg-lastAvg) ) / lastAvg;
    cout << setprecision(2) << fixed<<"Enerji degisim yuzdesi: %" << changeNatio<<endl;

    return 0;
}