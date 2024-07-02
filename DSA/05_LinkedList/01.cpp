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

void insertAtTail(Node* &head, int val){
    Node* n = new Node(val);

    if(head == NULL){
        head = n;
        return;
    }

    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = n;
}

void insertAtHead(Node* &head, int val){
    Node* n = new Node(val);

    n->next = head;
    head = n;
}

void deleteAtHead(Node* &head){
    Node* toDelete = head;
    head = head->next;
    delete toDelete;
}

void deletion(Node* &head, int val){
    Node* temp = head;

    if(head == NULL) return;

    while(temp->next->data != val){
        temp = temp->next;
    }
    Node* toDelete = temp->next;
    temp->next = temp->next->next;
    delete toDelete;
}

bool search(Node* head, int key){
    Node* temp = head;
    while(temp!=NULL){
        if(temp->data == key) return true;
        temp = temp->next;
    }
    return false;
}

void display(Node* head){
    Node* temp = head;

    while(temp!=NULL){
        cout << temp->data << " -> ";
        temp = temp->next;
    } cout << "NULL" << endl;
}

void reverse(Node* &head){
    Node* prev = NULL;
    Node* curr = head;
    Node* next;

    while(curr!=NULL){
        next = curr->next;
        curr->next = prev;

        prev = curr;
        curr = next;
    }
    head = prev;
}

int main(){

    Node* head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtHead(head, 10);
    insertAtHead(head, 20);
    display(head);

    deletion(head, 10);
    display(head);

    // deleteAtHead(head);


}