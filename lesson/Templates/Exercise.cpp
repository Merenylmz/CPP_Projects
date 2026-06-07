#include <iostream>

using namespace std;

template <typename T>
class Rectangle{
    private:
        T shortEdge;
        T longEdge;
    public:
        Rectangle(T _shortEdge, T _longEdge) : shortEdge(_shortEdge), longEdge(_longEdge) {}

    T perimeter(){
        return (shortEdge+longEdge)*2;
    }
    T area(){
        return shortEdge*longEdge;
    }
    void showEdges(){
        cout << "Long Edge: "<< longEdge << " Short Edge:" << shortEdge<<endl;
    }
};

int main(){
    Rectangle<int> rect(2, 5);
    rect.showEdges();
    cout << "Alan: " << rect.area() << endl;
    cout << "Cevre: " << rect.perimeter() << endl;


    return 0;
}