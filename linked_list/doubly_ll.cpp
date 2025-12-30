#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev;
    Node(int val) : data(val), next(nullptr), prev(nullptr) {}
};

class DoublyLinkedList {
private:
    Node* head;
public:
    DoublyLinkedList() : head(nullptr) {}

    void insertAtHead(int val) {
        Node* n = new Node(val);
        n->next = head;
        if (head) head->prev = n;
        head = n;
    }

    void printList() {
        Node* temp = head;
        while(temp) {
            cout << temp->data << " <-> ";
            temp = temp->next;
        }
        cout << "nullptr\n";
    }

    ~DoublyLinkedList() {
        while(head) {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }
};

int main() {
    DoublyLinkedList dll;
    dll.insertAtHead(1);
    dll.insertAtHead(2);
    dll.insertAtHead(3);

    dll.printList(); // Output: 3 <-> 2 <-> 1 <-> nullptr

    return 0;
}
