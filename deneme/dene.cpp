#include <iostream>
#include <string>

using namespace std;


int main(){

    string fullName, name, surname;

    cout << "Tam adinizi Giriniz: ";
    getline(cin, fullName);

    int space = fullName.find(" ");
    name = fullName.substr(0, space);
    surname = fullName.substr(space+1, fullName.length());

    cout << "\n Adiniz: "<< name << " Ve " << name.length()+1 << " Karakter(Bosluk ile birlikte)"<< endl;
    cout << "\n Soyadiniz: " << surname << " Ve " << surname.length() << " Karakter"<< endl;
    for (int i = 0; i < name.length(); i++)
    {
        name[i] = toupper(name[i]);
    }
    cout << "\n Buyuk harfle Adiniz " << name << endl;
   for (int a = 0; a < surname.length(); a++)
    {
        name[a] = tolower(name[a]);
    }
    cout << "\n kucuk harfle Adiniz " << name << endl;

    int b = 0;
    for (int j = surname.length()-1; 0 <= j; j--)
    {
        surname[j] = fullName.substr(space+1, fullName.length())[b];
        b++;
    }

    cout << "\n Tersten soyadiniz " << surname << endl;


    return 0;
}