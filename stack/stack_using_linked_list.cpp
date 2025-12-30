#include <iostream>
using namespace std;

struct Node{
  int data;
  Node* next;
  Node(int d): data(d), next(nullptr){};
};

class Stack{
    private:
        Node* top;
        int size;
    public:
        Stack(){
            top=nullptr;
            size=0;
        }
        
        bool isEmpty() const {
            return top == nullptr;
        }

    
        void push(int d){
            Node* n= new Node(d);
            n->next= top;
            top= n;
            size++;
        }
        
        void pop(){
            if (isEmpty()) {
                cout << "Stack Underflow\n";
                return;
            }
            
            Node* delNode= top;
            top=top->next;
            delete delNode;
            size--;
        }
        
        void peek(){
            if (isEmpty()) {
                cout << "Stack is empty\n";
                return;
            }
            cout<< top->data<<endl;
        }
        
        void getSize(){
            cout<< size<< endl;
        }
        
        void show(){
            if(isEmpty()){
                cout<< "Stack is empty";
                return;
            }
            
            Node* tempTop= top;
            while(tempTop!=nullptr){
                cout<< tempTop->data << " -> " ;
                tempTop= tempTop->next;
            }
            cout<< "nullptr";
        }
        
        ~Stack(){
            while(top!=nullptr){
                pop();
            }
        }
        
};

int main() {
    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.getSize();
    
    st.pop();
    st.getSize();
    st.peek();
    
    st.show();
    
    return 0;
}
