#include <iostream>

double dailyAverage(const double* temperatures, int n){
    double avg = 0;
    for (int i = 0; i < n; i++)
    {
        avg += temperatures[i];
    }
    
    return avg / n;
}

double maximum(const double* temperatures, int n){
    int maxVal = temperatures[0];

    for (int i = 0; i < n; i++)
    {
        if (temperatures[i]>maxVal)
        {
            maxVal = temperatures[i];
        }
    }
    return maxVal;
}

double minimum(const double* temperatures, int n){
    int minVal = temperatures[0];

    for (int i = 0; i < n; i++)
    {
        if (temperatures[i]<minVal)
        {
            minVal = temperatures[i];
        }
    }
    return minVal;
}