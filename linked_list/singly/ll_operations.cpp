#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

class SinglyLinkedList {
private:
    Node* head;
public:
    SinglyLinkedList() : head(nullptr) {}

    void insertAtHead(int val) {
        Node* n = new Node(val);
        n->next = head;
        head = n;
    }

    void insertAtTail(int val) {
        Node* n = new Node(val);
        if (!head) {
            head = n;
            return;
        }
        Node* temp = head;
        while(temp->next) temp = temp->next;
        temp->next = n;
    }

    void printList() {
        Node* temp = head;
        while(temp) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "nullptr\n";
    }

    void deleteHead() {
        if (!head) return;
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    ~SinglyLinkedList() {
        while(head) deleteHead();
    }
};

int main() {
    SinglyLinkedList ll;
    ll.insertAtHead(3);
    ll.insertAtHead(2);
    ll.insertAtTail(4);

    ll.printList(); // Output: 2 -> 3 -> 4 -> nullptr

    ll.deleteHead();
    ll.printList(); // Output: 3 -> 4 -> nullptr

    return 0;
}
