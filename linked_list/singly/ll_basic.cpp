#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

void printList(Node* head) {
    while(head != nullptr) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "nullptr\n";
}

int main() {
    // Create nodes
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);

    cout << "Singly Linked List: ";
    printList(head);

    return 0;
}

