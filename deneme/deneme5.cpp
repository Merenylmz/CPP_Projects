#include <iostream>
#include <iomanip>


using namespace std;

int* registerDiseased(int n){
    int *newArray = new int[n]();

    return newArray;
}

void enterScore(int* diseased, int n){
    int newVal;
    for (int i = 0; i < n; i++)
    {
        cout << "\n"<< (i+1) << ".Hastanin agri degerini giriniz: ";
        cin >> newVal;
        diseased[i] = newVal;
        if (diseased[i]>10 || diseased[i]<0)
        {
            cout << "\nLutfen Degerleri 1-10 arasinda giriniz\n";
            i-=1;
            continue;
        }
        cout << "\n";
    }
}

double calculateAverage(const int* diseaseds, int n){
    int avg = 0;
    for (int j = 0; j < n; j++)
    {
        avg += diseaseds[j];
    }
    
    return (double)avg/(double)n;
}

int maximumScore(const int* diseaseds, int n){
    int maxVal = diseaseds[0];
    for (int a = 0; a < n; a++)
    {
        if (maxVal < diseaseds[a])
        {
            maxVal = diseaseds[a];
        }
    }
    
    return maxVal;
}   


int minimumScore(const int* diseaseds, int n){
    int minVal = diseaseds[0];
    for (int a = 0; a < n; a++)
    {
        if (minVal > diseaseds[a])
        {
            minVal = diseaseds[a];
        }
    }
    
    return minVal;
} 

int* addDiseased(int* oldList, int oldN, int newScore){
    int* newList = new int[(oldN+1)]();
    for (int i = 0; i < oldN; i++)
    {
        newList[i] = oldList[i];
    }

    newList[oldN] = newScore;
    delete [] oldList;
    return newList;
}



int main(int argc, char* argv[]){
    int n;
    cout << "Kac hasta var? :";
    cin >> n;


    int* diseaseds = registerDiseased(n);
    enterScore(diseaseds, n);

    cout << setprecision(2) << fixed << "Ortalama: "<< calculateAverage(diseaseds, n) 
    << "\nEn Buyuk skor: " <<maximumScore(diseaseds, n)<<"\nEn kucuk skor: "<<minimumScore(diseaseds, n);
    
    int newScore;
    cout << "\nYeni hasta skoru giriniz: "; cin >> newScore;
    diseaseds = addDiseased(diseaseds, n, newScore);
    n+=1;
    

    cout << setprecision(2) << fixed << "Yeni Ortalama: "<< calculateAverage(diseaseds, n) 
    << "\nYeni En Buyuk skor: " <<maximumScore(diseaseds, n)<<"\nYeni En kucuk skor: "<<minimumScore(diseaseds, n)<<endl;


    delete [] diseaseds;
    return 0;
}