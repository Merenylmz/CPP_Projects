#include <iostream>
#include <vector>

using namespace std;

class Car{
    private:
        string brand;
        string model;
        int year;
    public:
        Car(string _brand, string _model, int _year) : brand(_brand),model(_model),year(_year){}
    
        void showInformations() const{
            cout << brand << " " << model << " " << year << endl; 
        }

};


int main(){
    vector<Car> vGarage;

    vGarage.push_back(Car("Toyota", "Corolla", 2018));
    vGarage.push_back(Car("Nissan", "Skyline", 2004));
    vGarage.push_back(Car("Audi", "A8", 2022));

    for (const Car& car: vGarage)
    {
        car.showInformations();
    }
    
    vGarage.erase(vGarage.begin()+2);
    cout << "\n\n";
    for (const Car& car: vGarage)
    {
        car.showInformations();
    }

    return 0;
}