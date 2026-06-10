#include <iostream>
using namespace std;

int convertTextToNumber(char* p) {
    int result = 0;

    while (*p != '\0')
    {
        result = (result*10)+(*p-'0');
        *p++;
    }
    return result;
}

int main() {
    char data[] = "1453";
    
    int number = convertTextToNumber(data);
    
    cout << "Metin: " << data << endl;
    cout << "Sayi ve Matematik: " << number + 100 << endl; 

    return 0;
}