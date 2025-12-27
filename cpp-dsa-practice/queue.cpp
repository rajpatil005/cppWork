#include <iostream>
using namespace std;

class queue{
        int front, rear;
        int arr[100];
    public:
        queue(): front(-1), rear(-1){};
        
        bool isEmpty(){
            return front==-1 || front>rear;
        }
        bool isFull(){
            return rear==99;
        }
        
        void enqueue(int v){
            if(isFull()){
                cout<< "Queue is full!\n";
                return;
            }
            if(isEmpty()){
                front=0;
            }
            
            arr[++rear]= v;
        }
        
        int dequeue(){
            if(isEmpty()){
                cout<< "Queue is empty!\n";
                return -1;
            }
            
            int v= arr[front++];
            if(front>rear){
                front= rear= -1;
            }
            return v;
            
        }
        
        void show(){
            if(isEmpty()){
                cout<< "Queue is empty!\n";
                return;
            }
            int temp= front;
            while(temp<=rear){
                cout<< arr[temp] << " ";
                temp++;
            }
        }
};

int main(){
    queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.dequeue();
    q.show();
    
    return 0;
}
