#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

class CircularLinkedList {
private:
    Node* tail;
public:
    CircularLinkedList() : tail(nullptr) {}

    void insert(int val) {
        Node* n = new Node(val);
        if (!tail) {
            tail = n;
            tail->next = tail;
        } else {
            n->next = tail->next;
            tail->next = n;
            tail = n;
        }
    }

    void printList(int count) { // count = number of nodes to print
        if (!tail) {
            cout << "List is empty\n";
            return;
        }
        Node* temp = tail->next;
        for (int i = 0; i < count; i++) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "...\n";
    }

    ~CircularLinkedList() {
        if (!tail) return;
        Node* curr = tail->next;
        Node* start = curr;
        do {
            Node* temp = curr;
            curr = curr->next;
            delete temp;
        } while(curr != start);
    }
};

int main() {
    CircularLinkedList cll;
    cll.insert(1);
    cll.insert(2);
    cll.insert(3);

    cll.printList(6); // Output: 1 -> 2 -> 3 -> 1 -> 2 -> 3 -> ...

    return 0;
}
