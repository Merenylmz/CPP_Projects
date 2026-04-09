#include <iostream>

using namespace std;

//düzelt
char** splitText(const char* text, char delimiter, int& wordCount) {
    
    int delimiterCount = 0;
    for (int j = 0; *(text + j); j++) {
        if (*(text + j) == delimiter) {
            delimiterCount++;
        }
    }
    
    wordCount = delimiterCount + 1; 

    char** newArray = new char*[wordCount];
    int currentWordIndex = 0; 
    int prevBracketIndex = 0; 

    for (int i = 0; ; i++) {
        
        if (*(text + i) == delimiter || *(text + i) == '\0') {
            
            int charCount = i - prevBracketIndex;

            newArray[currentWordIndex] = new char[charCount + 1];

            int k = 0; 
            for (int j = prevBracketIndex; j < i; j++) {
                newArray[currentWordIndex][k] = *(text + j);
                k++;
            }
            
            newArray[currentWordIndex][k] = '\0';

            currentWordIndex++;
            prevBracketIndex = i + 1;

            if (*(text + i) == '\0') {
                break;
            }
        }
    }

    return newArray;
}

void freeStringArray(char** arr, int count) {
    if (arr == nullptr) return;
    for (int i = 0; i < count; i++) {
        delete[] arr[i]; 
    }
    delete[] arr; 
}

int main() {
    cout << "--- C-STRING SPLIT (PARCALAMA) TESTI ---" << endl;
    
    const char* exampleText = "Trabzon,KTU,Yazilim,Muhendisligi,Vize,Sorusu";
    char bracket = ',';
    int textNumber = 0;

    char** kelimeler = splitText(exampleText, bracket, textNumber); 

    cout << "\nOrijinal Metin: " << exampleText << endl;
    cout << "Ayrac: '" << bracket << "'" << endl;
    
    cout << "\nBeklenen Cikti (Boyut: 6): " << endl;
    cout << "1. Trabzon\n2. KTU\n3. Yazilim\n4. Muhendisligi\n5. Vize\n6. Sorusu" << endl;
    
    cout << "\nSenin Ciktin   (Boyut: " << textNumber << "): " << endl;
    for(int i = 0; i < textNumber; i++) {
        cout << i + 1 << ". " << kelimeler[i] << endl;
    }
    
    freeStringArray(kelimeler, textNumber);
    return 0;
}