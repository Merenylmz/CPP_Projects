#include <iostream>
using namespace std;

void deleteSpace(char* str) {
   char* reader = str;
   char* writer = str;

    while (*reader != '\0')
    {
        if (*reader != ' ')
        {
            *writer = *reader;
            *writer ++;
        }
        reader++;
    }
    *writer = '\0';
}   

int main() {
    char userName[] = "  E r en    28  ";
    
    cout << "Islem Oncesi : '" << userName << "'" << endl;
    
    deleteSpace(userName);
    
    cout << "Islem Sonrasi: '" << userName << "'" << endl;
    return 0;
}