#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node* prev;
    Node(int d): data(d), next(nullptr), prev(nullptr){};
};
class Dlinkedlist{
    Node* head;
    Node* tail;
  public:
    Dlinkedlist(): head(nullptr), tail(nullptr){};
    void insertAtHead(int);
    void insertAtPos(int, int);
    void insertAtTail(int);
    void deleteAtHead();
    void deleteAtPos(int);
    void deleteAtTail();
    void search(int);
    void length();
    void show();
};

void Dlinkedlist::insertAtHead(int d){
    Node* n= new Node(d);
    
    if(head==nullptr){
        head= tail= n;
        return;
    }
    
    n->next= head;
    head->prev= n;
    head= n;
}
void Dlinkedlist::insertAtPos(int p, int d){
    if(p==0){
        insertAtHead(d);
        return;
    }
    
    int cnt=0;
    Node* tempHead= head;
    while(tempHead!= nullptr && cnt< p-1){
        tempHead= tempHead->next;
        cnt++;
    }
    
    if(tempHead==nullptr){
        cout<<"Position out of bounds!\n";
        return;
    }
    
    Node* n = new Node(d);
    n->next = tempHead->next;
    n->prev = tempHead;

    if (tempHead->next != nullptr) {
        tempHead->next->prev = n;
    } else {
        tail = n;
    }

    tempHead->next = n;
}
void Dlinkedlist::insertAtTail(int d){
    Node* n= new Node(d);
    
    if(head==nullptr){
        head= tail= n;
        return;
    }
    
    tail->next= n;
    n->prev= tail;
    tail= n;
}

void Dlinkedlist::deleteAtHead(){
    if(head==nullptr){
        cout<< "Linked-list id empty!";
        return;
    }
    
    if(head->next==nullptr){
        head= tail= nullptr;
        return;
    }
    
    Node* tempHead= head;
    head->next->prev= head->prev;
    head= head->next;
    delete tempHead;
}
void Dlinkedlist::deleteAtPos(int p){
    if(head==nullptr){
        cout<< "Linked list is empty!";
        return;
    }
    if(p==0){
        deleteAtHead();
        return;
    }
    
    int cnt=0;
    Node* tempHead= head;
    while(tempHead!=nullptr && cnt< p-1){
        tempHead= tempHead->next;
        cnt++;
    }
    
    if(tempHead==nullptr){
        cout<< "Position out of bounds!\n";
        return;
    }
    
    if (tempHead == tail) {
        deleteAtTail();
        return;
    }

    tempHead->prev->next = tempHead->next;
    tempHead->next->prev = tempHead->prev;
    delete tempHead;
}
void Dlinkedlist::deleteAtTail(){
    if(head==nullptr){
        cout<< "Position out of bounds!\n";
        return;
    }
    
    if(head==tail){
        delete tail;
        head= tail= nullptr;
        return;
    }
    
    Node* delNode= tail;
    tail->prev->next= nullptr;
    tail= tail->prev;
    delete delNode;
}

void Dlinkedlist::search(int v){
    Node* tempHead= head;
    while(tempHead!=nullptr){
        if(tempHead->data==v){
            cout<< "true\n";
            return;
        }
        tempHead= tempHead->next;
    }
    cout<< "false\n";
}
void Dlinkedlist::length(){
    int cnt= 0;
    Node* tempHead= head;
    
    while(tempHead!=nullptr){
        cnt++;
        tempHead= tempHead->next;
    }
    cout<< cnt<< endl;
}
void Dlinkedlist::show(){
    Node* tempHead= head;
    
    cout<< "Null pointer <-> ";
    while(tempHead!= nullptr){
        cout<< tempHead->data<< " <-> ";
        tempHead= tempHead->next;
    }
    cout<< "Null pointer\n";
}

int main(){
    Dlinkedlist dll;
    dll.insertAtHead(1);
    dll.insertAtTail(3);
    dll.insertAtTail(4);
    dll.insertAtPos(1, 2);
    dll.show();
    dll.search(5);
    dll.length();
    
    dll.deleteAtHead();
    dll.deleteAtPos(2);
    dll.deleteAtTail();
    dll.show();
    dll.length();
}


