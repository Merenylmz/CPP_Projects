#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

void listStock (const string& fileName);
void addProduct (const string& fileName, const string& productName, double price, int quantity);
void deleteProduct(const string& fileName, const string& destination);
void editPrice(const string& fileName, const string& destination, double newPrice);

int main(){
    ofstream MyFile("product_stock.txt");

    MyFile << "Laptop 15000 5";
    MyFile << "\nMouse 250 30";
    MyFile << "\nKlavye 450 20";
    MyFile.close();

    int choose = -1;
    cout << "\nSecimi yapiniz: ";
    cin >> choose;
    while (choose != -1)
    {
        switch (choose)
        {
            case 1:
                listStock("product_stock.txt");
                break;
            case 2:
                addProduct("product_stock.txt", "Deneme", 12.0, 5);
                break;
            case 3:
                deleteProduct("product_stock.txt", "Mouse 250 30");
                break;
            case 4:
                editPrice("product_stock.txt", "Klavye 450 20", 16.5);
                break;
            
            default:
                choose = -1;
        }
        cout << "\nSecimi yapiniz: ";
        cin >> choose;
    }
    MyFile.close();
    remove("temp.txt");
    return 0;
}

void listStock (const string& fileName){
    string text;
    int a = 0;
    ifstream MyFile(fileName);

    while (getline(MyFile, text))
    {
        ++a;
        if (text == "")
        {
            continue;
        }
        
        cout << a <<". "<<text << "\n";
    }

    MyFile.close();
}

void addProduct (const string& fileName, const string& productName, double price, int quantity){
    ofstream MyFile(fileName, ios::app);
    
    MyFile << "\n"<<productName << " " << price << " " << quantity;
    MyFile.close();
}

void deleteProduct(const string& fileName, const string& destination){
    string text;
    ifstream MyFile(fileName);
    ofstream TempFile("temp.txt"); 

    while (getline(MyFile, text))
    {
        if (destination == text) {
            TempFile << "" << endl; 
        } else {
            TempFile << text << endl;
        }
    }

    MyFile.close();
    TempFile.close();
    remove(fileName.c_str()); 
    rename("temp.txt", fileName.c_str());
}

void editPrice(const string& fileName, const string& destination, double newPrice){
    vector<string> lines; 
    string text;
    ifstream MyFile(fileName);
    ofstream TempFile("temp.txt"); 

    while (getline(MyFile, text))
    {
        lines.push_back(text);
    }
    MyFile.close();

    string temp = destination;
    temp.replace((destination.length()-2), 2, to_string(newPrice));
    cout << temp;
    if (!lines.empty()) {
        lines.back() = temp; 
    }

    ofstream output(fileName, ios::trunc);
    for (const auto& line : lines) {
        output << line << endl;
    }
}


