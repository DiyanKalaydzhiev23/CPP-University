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
        NodePtr currentElement = *element;
        NodePtr previousElement = newNode;

        while (currentElement != nullptr && currentElement->data > newNode->data) {
            previousElement = currentElement;
            currentElement = currentElement->next;
        }

        cout << currentElement->data << "with data" << data << endl;

        newNode->next = currentElement;
        previousElement->next = newNode;
    }
}

void printRecursiveReverse(NodePtr element) {
    if (element == nullptr) {
        return; 
    }

    printRecursiveReverse(element->next);

    cout << element->data << endl;
}


int main() {
    NodePtr head = nullptr; // Using typedef for pointer to Node

    insertEnd(&head, 10);
    insertEnd(&head, 20);
    insertEnd(&head, 30);
    insertEnd(&head, 25);

    printRecursiveReverse(head);

    return 0;
}
