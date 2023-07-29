#include <iostream>
#include<queue>
#include<unordered_map>
using namespace std;

class Node{
        public:
        int data;
        Node* left;
        Node* right;

        Node(int data) {
                this->data = data;
                this->left = NULL;     
                this->right = NULL;  
        }
};