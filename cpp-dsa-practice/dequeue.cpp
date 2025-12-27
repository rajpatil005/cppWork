#include <iostream>
using namespace std;

class Deque {
    int* data;
    int front, size, capacity;

public:
    Deque(int cap): front(0), size(0), capacity(cap){
        data= new int[capacity];
    }
    ~Deque(){ delete[] data;}

    bool isEmpty(){return size == 0;}
    bool isFull(){return size == capacity;}

    bool insertFront(int x){
        if (isFull()){
            cout<< "Queue is full!\n";
            return false;
        }
        front= (front-1+capacity)% capacity;
        data[front]= x;
        ++size;
        return true;
    }

    bool insertRear(int x){
        if (isFull()){
            cout<< "Queue is full!\n";
            return false;
        }
        int rear= (front + size) % capacity;
        data[rear]= x;
        ++size;
        return true;
    }

    bool deleteFront(){
        if (isEmpty()){
            cout<< "Queue is empty!\n";
            return false;
        }
            
        front= (front+1)% capacity;
        --size;
        return true;
    }

    bool deleteRear(){
        if (isEmpty()){
            cout<< "Queue is empty!\n";
            return false;
        }
        --size;
        return true;
    }

    void getFront(){
        if(isEmpty()){cout<< "Empty deque";}
        cout<< data[front]<< endl;
    }

    void getRear(){
        if(isEmpty()){cout<<"Empty deque";}
        cout<< data[(front+size-1)% capacity]<< endl;
    }
    
    void show(){
        int count = size;
        int idx = front;
        while (count--) {
            cout << data[idx] << " ";
            idx = (idx + 1) % capacity;
        }
        cout << endl;
    }

};

int main(){
    Deque d(2);
    d.insertFront(1);
    d.insertFront(2);
    d.insertFront(3);
    d.getFront();
    d.deleteRear();
    d.show();
}



