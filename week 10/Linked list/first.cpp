#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
    //TODO: Write a destrcutor to delete a node
        ~Node() {
                //write your code here
                cout << "Node with value: " << this->data << " deleted" << endl;
        }
};

int findLength(Node* &head){
    int len=0;
    Node* temp = head;  // temp is address
    while(temp != NULL){
        temp = temp->next;
        len++;
    }
    return len;
} 


void deleteNode(int position,Node* &head,Node* &tail){
    if(head== NULL){
        cout << "Cannot delete, LL is empty";
                return;
    }

    //deleting first element / update head
    if(position == 1){
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
        return;
    }

    int len = findLength(head);

    //deleting last node / update tail
    if(position == len){
        //find prev
        int i = 1;
        Node* prev = head;
        while(i < position -1){
            prev = prev->next;
            i++;
        }
        // step2:
        prev->next = NULL;
        // step3:
        Node* temp = tail;
        //step4:
        tail = prev;
        //step5:
        delete temp;
        return;
    }

    //delete middle node
    
    // find prev and current
    int i=1;
    Node* prev = head;
    while(i<position-1){
        prev = prev->next;
        i++;
    }
    Node* curr = prev->next;

    //step2: removing curr / bypassing
    prev->next = curr->next;
    //step:
    curr -> next = NULL;
    // step4:
    delete curr;
}

void print(Node* head){

    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout<<endl;
}


void insertAtHead(Node* &head,Node* &tail,int d){
    if(head == NULL) {
                Node* newNode = new Node(d);
                head = newNode;
                tail = newNode;
                return;
        }
    else{
        //creation of new node
    Node* newNode = new Node(d);
    newNode->next = head;
    head = newNode;
    }
}

void insertAtTail(Node* &head,Node* &tail,int d){
    if(head == NULL) {
                Node* newNode = new Node(d);
                head = newNode;
                tail = newNode;
                return;
        }
    else{
    //creation of new node
    Node* newNode = new Node(d);
    tail->next = newNode;
    tail = newNode;
    }
}

void insertAtPosition(int position,Node* &head,Node* &tail,int d){
    if(head == NULL) {
              Node* newNode = new Node(d);
              head = newNode;
              tail = newNode;
              return;
        }

    if(position == 0) {
                insertAtHead(head, tail , d);
                return;
        }

        int len = findLength(head);
        
    if(position >= len) {
                insertAtTail(head, tail, d);
                return;
        } 

    else{
    //Step:1 - find the position( prev and curr )
    int i=1;
    Node* prev = head;
    while(i < position){
        prev = prev->next;
        i++;
    }
    Node* curr = prev->next;
    //
    Node* newNode = new Node(d);
    newNode->next = curr;
    prev->next = newNode;
    } 
}


int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    insertAtHead(head,tail,20);
    insertAtHead(head,tail,40);
    insertAtHead(head,tail,80);

    insertAtTail(head,tail,50);

    insertAtPosition(3,head,tail,21);
    print(head);
    deleteNode(3,head,tail);
    print(head);
    return 0;
}