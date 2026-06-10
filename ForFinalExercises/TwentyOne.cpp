#include <iostream>

using namespace std;

void doTheFirstSpaceToHyphen(char* text){
    for (int i = 0; true; i++)
    {
        char denem = *(text+i);
        if (*(text+i) == ' ')
        {
            *(text+i) = '_';
            break;
        }
    }
}


int main(){
    char testText[] = "C++ COK GUZEL BIR DIL";
    
    cout << "islemden once: "<< testText<<endl;
    doTheFirstSpaceToHyphen(testText);
    cout << "islemden sonra: "<< testText<<endl;


    return 0;
}