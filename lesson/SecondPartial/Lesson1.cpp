#include <iostream>

using namespace std;


int calculate(int s, int b)
{
    return s*b;
}

int main(){

    string name;
    cout << "Enter Your Name: " ;
    cin >> name; 

    cout << "Welcome " << name << ", calculating rectangle area program" << endl;

    int smallEdge, bigEdge, area;

    cout << "Enter Small Edge: " ;
    cin >> smallEdge;

    cout << "\nEnter Big Edge: " ;
    cin >> bigEdge; 

    if (smallEdge > bigEdge)
    {
        cout << "Small edge cant be bigger than big edge" << endl;
        return 0;
    }
    
    area = calculate(smallEdge, bigEdge);

    cout << "Result: " << area <<endl;

    return 0;
}