#include <iostream>

using namespace std;

struct Box {
    int value;
    Box* nextBox; 
};

int sumTheBoxes(Box* first){
    int sum = 0;
    Box* temp = first;
    while (temp->nextBox != nullptr)
    {
        sum += temp->value;
        temp = temp->nextBox;
    }
    return sum+(temp->value);
}

int main(){
    Box* k1 = new Box{10, nullptr};
    Box* k2 = new Box{25, nullptr};
    Box* k3 = new Box{15, nullptr};
    Box* k4 = new Box{50, nullptr};

    k1->nextBox = k2;
    k2->nextBox = k3;
    k3->nextBox = k4;

    cout << sumTheBoxes(k1)<<endl;


    return 0;
}