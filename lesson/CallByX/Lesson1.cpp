#include <iostream>


using namespace std;

void changeWithCallByValue(int value){
    value = value * 5;
}

void changeWithCallByReference(int& value){
    value = value * 5;
}


int main(){
    int number = 6;
    changeWithCallByValue(number);
    cout << "Sayiyi degistir: "<< number << endl;

    changeWithCallByReference(number);
    cout << "Sayiyi degistir: "<< number;

    

    return 0;
}