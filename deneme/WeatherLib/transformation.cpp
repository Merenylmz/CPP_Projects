#include <iostream>

double celsiusToFahrenheit(double c){

    return (c*(9/5))+32;
}

double fahrenheitToCelcius(double f){

    return (f-32)*(5/9);
}

double celsiusToKelvin(double c){
    return c+(273.15);
}