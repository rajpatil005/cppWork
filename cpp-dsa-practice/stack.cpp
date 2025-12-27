#include <iostream>
using namespace std;

class stack{
        int arr[100];
        int top;
    public:
        stack(): top(-1){};
        
        bool isEmpty(){return top==-1;}
        bool isFull(){return top==99;}
        
        void push(int d){
            if(isFull()){
                cout<< "Stack overflow!\n";
                return;
            }
            arr[++top]= d;
        }
        
        void pop(){
            if(isEmpty()){
                cout<< "Stack underflow!\n";
                return;
            }
            top--;
        }
        
        void peek(){
            if(isEmpty()){
                cout<< "Stack underflow!\n";
                return;
            }
            cout<< arr[top]<< endl;
        }
        
        void show(){
            int i=0;
            while(i<=top){
                cout<< arr[i]<< " ";
                i++;
            }
        }
};

int main(){
    stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.peek();
    s.pop();
    s.show();
    return 0;
}
