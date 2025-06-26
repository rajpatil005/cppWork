#include <iostream>
using namespace std;

struct Node{
  int data;
  Node* next;
  Node(int d): data(d), next(nullptr){};
};
class linkedlist{
    Node* head;
  public:
    linkedlist(): head(nullptr){};
    
    void insertAtHead(int);
    void insertAtPos(int, int);
    void insertAtEnd(int);
    
    void deleteAtHead();
    void deleteAtPos(int);
    void deleteAtEnd();
    void deleteByVal(int);
    void deleteAll();
    
    void show();
};

void linkedlist::insertAtHead(int d){
    Node* n= new Node(d);
    n->next= head;
    head= n;
}
void linkedlist::insertAtPos(int p, int d){
    Node* n= new Node(d);
    
    if(p==0){
        n->next= head;
        head= n;
        return;
    }
    
    int cnt=0;
    Node* tempHead= head;
    while(tempHead!=nullptr && cnt<p-1){
        tempHead= tempHead->next;
        cnt++;
    }
    
    if(tempHead==nullptr){
        cout<< "Position out of bound!\n";
        delete n;
        return;
    }
    
    n->next= tempHead->next;
    tempHead->next= n;
}
void linkedlist::insertAtEnd(int d){
    Node* n= new Node(d);
    if(head==nullptr){
        n->next= head;
        head= n;
        return;
    }
    
    Node* tempHead= head;
    while(tempHead->next!= nullptr){
        tempHead= tempHead->next;
    }
    tempHead->next= n;
}

void linkedlist::deleteAtHead(){
    if(head==nullptr){
        cout<<"Linked-list is empty!";
        return;
    }
    
    Node* delNode= head;
    head= head->next;
    delete delNode;
}
void linkedlist::deleteAtPos(int p){
    if(head==nullptr){
        cout<< "Linked-list is empty!";
        return;
    }
    
    if(p==0){
        deleteAtHead();
        return;
    }
    
    int cnt=0;
    Node* tempHead= head;
    while(tempHead!= nullptr && cnt< p-1){
        tempHead= tempHead->next;
        cnt++;
    }
    
    if(tempHead->next==nullptr){
        cout<<"Deletion out of bounds!";
        return;
    }
    
    Node* delNode= tempHead->next;
    tempHead->next= tempHead->next->next;
    delete delNode;
}
void linkedlist::deleteAtEnd(){
    if(head==nullptr){
        cout<<"Linked-list is empty!";
        return;
    }
    
    if(head->next==nullptr){
        delete head;
        head= nullptr;
        return;
    }
    
    Node* tempHead= head;
    while(tempHead->next->next!=nullptr){
        tempHead= tempHead->next;
    }
    
    delete tempHead->next;
    tempHead->next= nullptr;
}
void linkedlist::deleteByVal(int v){
    if(head==nullptr){
        cout<< "Linked-list is empty!";
        return;
    }
    
    if(head->data==v){
        deleteAtHead();
        return;
    }
    
    Node* tempHead= head;
    while(tempHead->next!= nullptr && tempHead->next->data!= v){
        tempHead= tempHead->next;
    }
    
    if(tempHead->next== nullptr){
        cout<< "Value not found!";
        return;
    }
    
    Node* delNode= tempHead->next;
    tempHead->next= tempHead->next->next;
    delete delNode;
}
void linkedlist::deleteAll(){
    while(head!= nullptr){
        deleteAtHead();
    }
}

void linkedlist::show(){
    for(Node* p=head; p; p=p->next){
        cout<< p->data<< " -> ";
    }
    cout<< "Null Pointer"<< endl;
}

int main() {
    linkedlist ll;
    
    ll.insertAtHead(1);
    ll.insertAtPos(1, 2);
    ll.insertAtEnd(3);
    ll.insertAtPos(3, 4);
    ll.show();
    
    ll.deleteAtHead();
    ll.deleteAtPos(1);
    ll.deleteAtEnd();
    ll.deleteByVal(2);
    ll.deleteAll();
    ll.show();
    
    return 0;
}
