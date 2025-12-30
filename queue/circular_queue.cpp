#include <iostream>
using namespace std;

// Circular Queue implementation
class CircularQueue {
private:
    int* arr;
    int front, rear, capacity;

public:
    CircularQueue(int cap) {
        capacity = cap;
        arr = new int[capacity];
        front = -1;
        rear = -1;
    }

    bool isEmpty() const {
        return front == -1;
    }

    bool isFull() const {
        return (rear + 1) % capacity == front;
    }

    void enqueue(int x) {
        if (isFull()) {
            cout << "Circular Queue Overflow\n";
            return;
        }
        if (isEmpty()) front = 0;
        rear = (rear + 1) % capacity;
        arr[rear] = x;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Circular Queue Underflow\n";
            return;
        }
        if (front == rear) {
            front = rear = -1;
        } else {
            front = (front + 1) % capacity;
        }
    }

    void peek() const {
        if (isEmpty()) {
            cout << "Queue is empty\n";
            return;
        }
        cout << arr[front] << endl;
    }

    void show() const {
        if (isEmpty()) {
            cout << "Queue is empty\n";
            return;
        }
        int i = front;
        while (true) {
            cout << arr[i] << " ";
            if (i == rear) break;
            i = (i + 1) % capacity;
        }
        cout << endl;
    }

    ~CircularQueue() {
        delete[] arr;
    }
};

int main() {
    CircularQueue cq(5);
    cq.enqueue(1);
    cq.enqueue(2);
    cq.enqueue(3);

    cq.show();   // 1 2 3
    cq.dequeue();
    cq.enqueue(4);
    cq.show();   // 2 3 4

    return 0;
}
