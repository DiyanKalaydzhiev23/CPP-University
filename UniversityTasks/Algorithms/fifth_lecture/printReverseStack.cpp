#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int data) : data(data), next(nullptr) {}
};

typedef Node* NodePtr; // typedef for pointer to Node

void insertEnd(NodePtr* element, int data) { // we pass head and tail by ref
    NodePtr newNode = new Node(data);
    
    if (*element == nullptr) {
        *element = newNode;
    } else {
        newNode->next = *element;
        *element = newNode;
    }
}

int main() {
    NodePtr head = nullptr; // Using typedef for pointer to Node

    insertEnd(&head, 10);
    insertEnd(&head, 20);
    insertEnd(&head, 30);

    return 0;
}
