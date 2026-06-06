#include <iostream>
#include <list>
using namespace std;

void printList(list<int> lst){
    list<int>::iterator itr;
    for (itr = lst.begin(); itr != lst.end(); itr++)
    {
        cout << *itr << "  ";
    }
    cout << endl;
}

int main() {
    list<int> list;
    list.push_back(2);
    list.push_back(4);
    list.push_front(6);
    printList(list);

    list.pop_back(); //pop_front baştan siler
    printList(list);

    return 0;
}

