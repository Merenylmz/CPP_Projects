#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* reverseList(Node* head){
    int temp;
    for (int i = 0; i < 5; i++)
    {
        head[i].data = head[i].next[0].data;
    }
    return head;
}

Node* append(Node* head, int newData) {
    Node* newNode = new Node();
    newNode->data = newData;
    newNode->next = nullptr;

    if (head == nullptr) return newNode;

    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = newNode;
    return head;
}

void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

void freeList(Node* head) {
    Node* temp;
    while (head != nullptr) {
        temp = head;
        head = head->next;
        delete temp;
    }
}

int main() {
    
    Node* starter = nullptr;
    
    starter = append(starter, 10);
    starter = append(starter, 20);
    starter = append(starter, 30);
    starter = append(starter, 40);
    starter = append(starter, 50);

    printList(starter);

    Node* reversedList = reverseList(starter);

    cout << "\nBeklenen Sonuc:" << endl;
    cout << "50 -> 40 -> 30 -> 20 -> 10 -> NULL" << endl;

    cout << "\nSenin Ciktin:" << endl;
    printList(reversedList);

    freeList(reversedList);
    return 0;
}