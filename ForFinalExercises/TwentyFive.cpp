#include <iostream>

using namespace std;

struct Car {
    int plateNo;
    int parkDurationMinute;
};

void findTheLongestParkedCar(Car* otopark, int size, Car& mostAwaitedCar){ 
    Car *max;
    max->parkDurationMinute = otopark->parkDurationMinute;
    max->plateNo=otopark->plateNo;
    for (int i = 0; i < size; i++)
    {
        if ((otopark+i)->plateNo == -1)
        {
            break;
        }
        if (max->parkDurationMinute < (otopark+i)->parkDurationMinute)
        {
            max->parkDurationMinute = (otopark+i)->parkDurationMinute;
            max->plateNo = (otopark+i)->plateNo;
        }
    }
    mostAwaitedCar = *max;
}

int main(){
    int size = 4;
    Car* cars = new Car[size];
    cars[0] = {101, 45};
    cars[1] = {102, 120};
    cars[2] = {103, 300}; // <-- En çok bekleyen
    cars[3] = {104, 15};

    Car resultCar = {0, 0};

    findTheLongestParkedCar(cars, size, resultCar);

    cout << "Plate: " << resultCar.plateNo << " Suresi: " <<resultCar.parkDurationMinute<<endl;

    delete[] cars;
    return 0;
}//Besmele