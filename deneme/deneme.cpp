#include <iostream>
#include <iomanip>

using namespace std;

void reportError(){
    static int errorCounter;
    errorCounter++;
    cout << "\n[SYSTEM]:Sensor Error!! Total Error: " << errorCounter << "\n";
}

double filterSignal(double rawDistance){
    static double validValue;

    if (rawDistance < 0 || rawDistance > 100)
    {
        reportError();
        return validValue;
    }
    validValue = rawDistance;
    return rawDistance;    
}

bool criticalLevel(double distance){

    if (distance > 5.0)
    {
        return false;
    }
    return true;
}
void systemStatus(double raw, double filtered){
    cout << fixed << setprecision(2) << "\n\nRaw Value: " << raw << " Filtered Value: " << filtered << "\n\n";
}
void urgentBrake(){
    cout << "\n\nUrgent State Brake Enable!!!!!!\n\n";
}

int main(){
    double values[] = {25.5, -5.0, 30.2, 999.9, 4.0, 45.0};

    for (int i = 0; i < 6; i++)
    {
        double rawValue = values[i];
        double filteredValue = filterSignal(rawValue);
        systemStatus(rawValue, filteredValue);
        bool criticalValueStatus = criticalLevel(filteredValue);
        if (!criticalValueStatus)
        {
            urgentBrake();
            // return 0; 
        }
    }
    

    return 0;
}