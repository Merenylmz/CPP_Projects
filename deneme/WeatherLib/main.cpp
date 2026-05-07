#include <iostream>
#include <iomanip>

//#include "transformation.cpp";
//#include "analysis.cpp";

#include "analysis.h"
#include "transformation.h"

//#include <tranformation.h>

using namespace std;


// extern double celsiusToFahrenheit();
// extern double fahrenheitToCelcius();
// extern double celsiusToKelvin();

// extern double dailyAverage();
// extern double maximum();
// extern double minimum();


int main(){
    double week[] = {18.5, 22.0, 15.3, 25.8, 20.1, 17.6, 23.4};
    int n = 7;

    cout << setprecision(2) << fixed <<"Ortalamalar: "<< dailyAverage(week, n)<< 
    " En Yuksek deger: " << maximum(week, n) << " En Kucuk Deger: "<< minimum(week, n)<<endl;

    double fahrenWeek[] = {};
    for (int i = 0; i < n; i++)
    {
        fahrenWeek[i] = celciusToFahrenheit(week[i]); 
    }

    double kelvinWeek[] = {};
    for (int i = 0; i < n; i++)
    {
        kelvinWeek[i] = celciusToKelvin(week[i]); 
    }
    
    cout << setprecision(2) << fixed <<"Fahrenheit Ortalamalar: "<< dailyAverage(fahrenWeek, n)<< 
    " Kelvin Ortalamalar: " << dailyAverage(kelvinWeek, n)<<endl;

    return 0;
}