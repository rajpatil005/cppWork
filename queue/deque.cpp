#include <iostream>
using namespace std;

// Deque (Double Ended Queue) using array
class Deque {
private:
    int* arr;
    int front, rear, capacity;

public:
    Deque(int cap) {
        capacity = cap;
        arr = new int[capacity];
        front = -1;
        rear = -1;
    }

    bool isEmpty() const {
        return front == -1;
    }

    bool isFull() const {
        return (front == 0 && rear == capacity - 1) ||
               (front == rear + 1);
    }

    void insertFront(int x) {
        if (isFull()) {
            cout << "Deque Overflow\n";
            return;
        }
        if (isEmpty()) {
            front = rear = 0;
        } else if (front == 0) {
            front = capacity - 1;
        } else {
            front--;
        }
        arr[front] = x;
    }

    void insertRear(int x) {
        if (isFull()) {
            cout << "Deque Overflow\n";
            return;
        }
        if (isEmpty()) {
            front = rear = 0;
        } else if (rear == capacity - 1) {
            rear = 0;
        } else {
            rear++;
        }
        arr[rear] = x;
    }

    void deleteFront() {
        if (isEmpty()) {
            cout << "Deque Underflow\n";
            return;
        }
        if (front == rear) {
            front = rear = -1;
        } else if (front == capacity - 1) {
            front = 0;
        } else {
            front++;
        }
    }

    void deleteRear() {
        if (isEmpty()) {
            cout << "Deque Underflow\n";
            return;
        }
        if (front == rear) {
            front = rear = -1;
        } else if (rear == 0) {
            rear = capacity - 1;
        } else {
            rear--;
        }
    }

    void show() const {
        if (isEmpty()) {
            cout << "Deque is empty\n";
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

    ~Deque() {
        delete[] arr;
    }
};

int main() {
    Deque dq(5);
    dq.insertRear(10);
    dq.insertRear(20);
    dq.insertFront(5);
    dq.show();  // 5 10 20

    dq.deleteFront();
    dq.show();  // 10 20

    return 0;
}
