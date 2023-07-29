#include<iostream>
#include<queue>
using namespace std;
class Node{
public:
    int data;
    Node* left;
    Node* right;
    // Node(){
    //     this->data = 0;
    //     this->left = NULL;
    //     this->right = NULL;
    // }
    Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* insertNode(Node* root,int data){
    if(root == NULL){
        root = new Node(data);
        return root;
    }
    if(root->data > data){
        root->left = insertNode(root->left,data);
    }
    else{
        root->right = insertNode(root->right,data);
    }
    return root;
}
void takeInputs(Node* root){
    int data;
    cin>>data;
    while(data != -1){
        insertNode(root,data);
        cin>>data;
    }
}

void levelOrderTraversal(Node* root ) {
    queue<Node*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* frontNode = q.front();
        q.pop();
        if(frontNode == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<frontNode->data<<" ";

            if(frontNode->left){
                q.push(frontNode->left);
            }
            if(frontNode->right){
                q.push(frontNode->right);
            }
        }
    }
}

void preOrderTraversal(Node* root ){
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}
void inOrderTraversal(Node* root ){
    if(root == NULL){
        return;
    }
    inOrderTraversal(root->right);
    cout<<root->data<<" ";
    inOrderTraversal(root->left);
}
void postOrderTraversal(Node* root ){
    if(root == NULL){
        return;
    }
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout<<root->data<<" ";
}

Node* findNodeInBST(Node* root, int target){
    if(root == NULL){
        return NULL;
    }
    if(root->data == target){
        return root;
    }
    else if(root->data > target){
        return findNodeInBST(root->left,target);
    }
    else{
        return findNodeInBST(root->right,target);
    }
}

int minVal(Node* root){
    Node* temp = root;
    if(temp == NULL){
        return -1;
    }
    while(temp->left){
        temp = temp->left;
    }
    return temp->data;
}

int minVal(Node* root){
    Node* temp = root;
    if(temp == NULL){
        return -1;
    }
    while(temp->right){
        temp = temp->right;
    }
    return temp->data;
}
int main()
{
    return 0;
}