#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

void insertAtHead(Node* &head, int val){
    Node* n = new Node(val);

    if(head==NULL){
        n->next = n;
        head = n;
        return;
    }

    Node* temp = head;
    while(temp->next != head){
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
    head = n;
}

void insertAtTail(Node* &head, int val){
    Node* n = new Node(val);

    if(head == NULL){
        insertAtHead(head, val);
        return;
    }
    Node* temp = head;

    while(temp->next != head){
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
}

void deleteAtHead(Node* &head){
    Node* temp = head;
    while(temp->next != head){
        temp = temp->next;
    }
    Node* toDelete = head;
    temp ->next = head -> next;
    head = head -> next;
    delete toDelete;
}

void deletion(Node* &head, int pos){
    Node* temp = head;
    if(pos==1){
        deleteAtHead(head);
        return;
    }
    int count = 1;
    while(count != pos-1){
        temp= temp->next;
        count++;
    }
    Node* toDelete = temp->next;
    temp->next = temp->next->next;

    delete toDelete;
}

void display(Node *head){
    Node* temp = head;
    do{
        cout << temp->data << " -> ";
        temp = temp->next;
    }while(temp!=head);
    cout << "NULL" << endl;
}
int main(){
    Node* head = NULL;
    insertAtHead(head, 10);
    insertAtHead(head, 20);
    insertAtHead(head, 30);

    display(head);
}