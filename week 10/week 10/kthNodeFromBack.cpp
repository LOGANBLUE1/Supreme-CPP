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
void print(Node* head){

    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout<<endl;
}
void printKthElementFromBack(Node* &head,int k){
    int num = findLength(head)-k;
    Node* temp = head;
    while(num){
        temp = temp->next;
        num--;
    }
    cout<<"Ans is : "<<temp->data<<endl;
}
int main()
{
  Node* head = new Node(10);
  Node* second = new Node(20);
  Node* third = new Node(30);
  Node* fourth = new Node(40);
  Node* fifth = new Node(50);
  Node* sixth = new Node(60);
  Node* seventh = new Node(70);
  Node* eighth = new Node(80);
  Node* ninth = new Node(90);
  head -> next = second;
  second -> next = third;
  third -> next = fourth;
  fourth -> next = fifth;
  fifth -> next = sixth;
  sixth -> next = seventh;
  seventh -> next = eighth;
  eighth -> next = ninth;

print(head);
cout<<findLength(head)<<endl;
printKthElementFromBack(head,3);
    return 0;
}