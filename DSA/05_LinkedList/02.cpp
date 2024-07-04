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

bool isCircular(Node* head){
    if(head==NULL) return true;
    Node* temp = head;
    while(temp!= NULL && temp != head){
        temp= temp->next;
        if(temp == head) return true;
    }

    return false;
}

Node* floydDetectLoop(Node* head){
    if(head==NULL) return NULL;

    //Create two pointers fast and slow and initiliza them on head
    Node* slow = head;
    Node* fast = head;

    //untill fast and slow are not equal to NULL, we keep moving slow by one step and fast by two step
    while(fast!=NULL && slow!=NULL){
        slow = slow->next;
        if(fast->next!=NULL)fast = fast->next->next;
        if(fast == slow) return slow;
    }
    return NULL;
    //if slow == fast return slow
    //if not then return NULL
}

Node* getStartingNode(Node* head){
    if(head == NULL) return NULL;
    Node* intersection = floydDetectLoop(head);
    //initilize slow on head
    Node* slow = head;
    //while slow is not equal to intersection

    while(slow != intersection){
        slow = slow->next;
        intersection = intersection->next;
    }
    return slow;
    //move slow by one and intersection by one
    //return ?

}

void removeLoop(Node* head){
    if(head==NULL) return;
    Node* startOfLoop = getStartingNode(head);
    Node* temp = startOfLoop;
    //iterate temp until i reach node whose next is pointing at startOfLoop
    while(temp->next != startOfLoop){
        temp = temp->next;
    }
    temp->next = NULL;

    //point last node at NULL
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