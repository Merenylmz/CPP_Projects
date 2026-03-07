#include <iostream>

using namespace std;

int main(){

    char message[] = "Merhaba";
    cout << message << "\n";
    int length = 0;
    while (message[length] != '\0')
    {
        length++;
    }
    cout << length << "\n";

    string modernMessage = string(message);

    modernMessage.append(" Deneme");

    cout << modernMessage << endl;
    return 0;
}