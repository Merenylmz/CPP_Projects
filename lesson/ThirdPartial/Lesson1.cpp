#include <iostream>

using namespace std;


int main(){


    int num = 0;
    cout << "Gun sayisini giriniz: ";
    cin >> num;

    switch (num)
    {
    case 1:
        cout << "\nPazartesi";
        break;
    case 2:
        cout << "\nSali";
        break;
    case 3:
        cout << "\nÇarşamba";
        break;
    case 4:
        cout << "\nPerşembe";
        break;
    case 5:
        cout << "\nCuma";
        break;
    case 6:
        cout << "\nCumartesi";
        break;
    case 7:
        cout << "\nPazar";
        break;
    
    default:
        cout << "\nLutfen 1 ile 7 arasi sayiyi giriniz";
        break;
    }


    return 0;
}
