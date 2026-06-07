#include <iostream>
#include <string>
#include <iomanip>


using namespace std;

template <typename T> class SensorWareHouse {
    private: 
        string sensorName;
        T lastValue;
        T maxValue;
        T minValue;
    public:
        SensorWareHouse(string sensorName, T starterValue){
            this->sensorName = sensorName;
            maxValue = starterValue;
            minValue = starterValue;
        }
        void update(T newValue){
            lastValue = newValue;
            if (maxValue < newValue)
            {
                maxValue = newValue;
            } else if (minValue > newValue)
            {
                minValue = newValue;    
            }
        }
        void report(){
            cout << fixed << setprecision(1)<< "\n" << "\033[1;35mName:\033[0m" << sensorName << " \033[1;32mLast:\033[0m "<< lastValue <<  " \033[1;31mMax:\033[0m "<< maxValue <<  " \033[1;32mMin:\033[0m " << minValue << "\n";
        }
};




int main(){
    SensorWareHouse<double> temperature("Sicaklik - 1", 22.5);
    temperature.update(25.3);
    temperature.update(19.8);
    temperature.update(31.0);
    temperature.report();

    SensorWareHouse<int> vibration("Titresim-A", 100);
    vibration.update(450);
    vibration.update(80);
    vibration.report();


    SensorWareHouse<string> state("Durum-X", "normal");
    state.update("alarm");
    state.update("normal");
    state.report();

    cout << "\n";
    
    cout << ("zcc" < "bcc")<< endl;
    cout << ("acc" > "abc") << endl;
    return 0;
}