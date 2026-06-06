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

void deleteItem(list<int>* pl){
    list<int>::iterator itr;
    itr = pl->begin();
    itr++; itr++; itr++;
    pl->erase(itr);
}

int main() {
    list<int> lst;
    lst.push_back(2);
    lst.push_back(4);
    lst.push_front(6);
    printList(lst);

    // lst.pop_back(); //pop_front baştan siler
    // printList(lst);

    list<int>::iterator itr;
    itr = lst.begin();
    itr++;
    itr++;
    lst.insert(itr, 5, 7);
    printList(lst);


    deleteItem(&lst);
    printList(lst);
    return 0;
}

