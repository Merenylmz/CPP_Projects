#include <iostream>
#include <iomanip>

using namespace std;

int* cropScreen(const int* screen, int screenWidth, int startX, int startY, int cropWidth, int cropHeight){
    int * cropedScreen = new int [cropHeight*cropWidth];
    int k = 0;

    for (int y = 0; y < cropHeight; y++)
    {
        for (int x = 0; x < cropWidth; x++)
        {
            cropedScreen[k] = ((startY + y)*screenWidth+(startX+x))+1;     
            k++;
        }
    }
    
    return cropedScreen;
}

int main() {
    
    int screenWidth = 5;
    int screenHeight = 5;
    
    int* screen = new int[screenWidth * screenHeight];
    
    for (int i = 0; i < screenWidth * screenHeight; i++) {
        screen[i] = i + 1;
    }

    cout << "\nAna Ekran (5x5):" << endl;
    for (int y = 0; y < screenHeight; y++) {
        for (int x = 0; x < screenWidth; x++) {
            cout << setw(3) << screen[y * screenWidth + x] << " ";
        }
        cout << endl;
    }

    int startX = 1;
    int startY = 2;
    int cropW = 3;
    int cropH = 2;

    cout << "\nKirpma Istegi: Baslangic(X:" << startX << ", Y:" << startY << "), Boyut: " << cropW << "x" << cropH << endl;

    int* cropped = cropScreen(screen, screenWidth, startX, startY, cropW, cropH);

    cout << "\nBeklenen Cikti (3x2):" << endl;
    cout << " 12  13  14\n 17  18  19" << endl;

    cout << "\nSenin Ciktin:" << endl;
    if (cropped != nullptr) {
        for (int y = 0; y < cropH; y++) {
            for (int x = 0; x < cropW; x++) {
                cout << setw(3) << cropped[y * cropW + x] << " ";
            }
            cout << endl;
        }
    } else {
        cout << "Hata: Ekran disina tasildi veya nullptr dondu!" << endl;
    }

    delete[] screen;
    delete[] cropped;

    return 0;
}