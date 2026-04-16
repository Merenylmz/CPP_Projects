#include <iostream>

using namespace std;
//HATALI
char* findAndReplace(const char* text, const char* oldWord, const char* newWord){
    int i;
    for (i = 0; *(text+i); i++);
    char* newText = new char[100]; 
    int counter = 0;
    for (int a = 0; *(text+a); a++)
    {
        char d = *(text+a);
        if (*(text+a) == *(oldWord))
        {
            for (int j = 0; *(newWord+j); j++)
            {
                counter ++;
                *(newText+a+j) = *(newWord+j);
            }
            continue;
        }
        *(newText+a+counter) = *(text+a);
    }

    return newText;
}

int main(){

    const char* mainText = "Ben C dilini seviyorum. C ogrenmek cok zevkli!";
    const char* oldText = "C";
    const char* newText = "C++";

    char* resultText = findAndReplace(mainText, oldText, newText);

    cout << "\nAna Metin   : " << mainText << endl;
    cout << "Eski Kelime : '" << oldText << "'" << endl;
    cout << "Yeni Kelime : '" << newText << "'" << endl;
    
    cout << "\nBeklenen Cikti:" << endl;
    cout << "Ben C++ dilini seviyorum. C++ ogrenmek cok zevkli!" << endl;
    
    cout << "\nSenin Ciktin:" << endl;
    if (resultText != nullptr) {
        cout << resultText << endl;
    } else {
        cout << "(Pointer nullptr dondu!)" << endl;
    }

    delete[] resultText;

    return 0;
}