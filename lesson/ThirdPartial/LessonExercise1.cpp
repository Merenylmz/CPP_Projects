#include <iostream>

using namespace std;


int main(){

    
    int s1, s2, s3;
    cout << "1.sayiyi giriniz: ";
    cin >> s1;
    cout << "\n2.sayiyi giriniz: ";
    cin >> s2;
    cout << "\n3.sayiyi giriniz: ";
    cin >> s3;

    if (s1>=s2 && s1>=s3)
    {
        cout << s1<< "sayisi en buyuk sayidir.";
    } else if(s2 >= s1 && s2>=s3){
        cout << s2 << "sayisi en buyuk sayidir.";
    } else if (s3 >= s1 && s3>=s2){
        cout << s3 << "sayisi en buyuk sayidir.";
    }

    return 0;
}