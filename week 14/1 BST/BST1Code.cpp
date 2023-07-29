#include <iostream>
#include<queue>
using namespace std;

class Node {
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


Node* insertIntoBST(Node* root, int data) {

        if(root == NULL) {
                //this is the first node we have to create
                root = new Node(data);
                return root;
        }

        //no the first node 

        if(root-> data > data) {
                //insert in left
                root->left = insertIntoBST(root->left, data);
        }
        else {
                //insert into right
                root->right = insertIntoBST(root->right, data);
        }
        return root;
}

void takeInput(Node* &root) {
        int data;
        cin >> data;

        while(data != -1) {
                root = insertIntoBST(root, data);
                cin >> data;
        }
}
void levelOrderTraversal(Node* root ) {
	queue<Node*> q;
	//initially
	q.push(root);
	q.push(NULL);

	while(!q.empty()) {
		//A
		Node* temp = q.front();
		//B
		q.pop();
		
		if(temp == NULL) {
			cout << endl;
			if(!q.empty()) {
				q.push(NULL);
			}	
		}
		else {
			//C
			cout << temp->data << " ";
			//D
			if(temp -> left) {
				q.push(temp ->left);
			}
			if(temp ->right) {
				q.push(temp->right);
			}
		}
		
		
	}
}

void preOrderTraversal(Node* root) {
	//NLR
	if(root == NULL)
		return;

	cout << root->data << " ";
	preOrderTraversal(root->left);
	preOrderTraversal(root->right);
}

void inOrderTraversal(Node* root) {
	//LNR
	if(root == NULL)
		return;

	inOrderTraversal(root->left);
	cout << root->data << " ";
	inOrderTraversal(root->right);
}

void postOrderTraversal(Node* root) {
	//LRN
	if(root == NULL)
		return;

	postOrderTraversal(root->left);
	postOrderTraversal(root->right);
	cout << root->data << " ";
}

//assuming there are only unique values in tree
Node* findNodeInBST(Node* &root, int target) {
	///base case
	if(root == NULL) {
		return NULL;
	}

	if(root->data == target) 
		return root;
//assuming there are only unique values in tree
	
	if(target > root->data) {
		//right subtree me search karo
		return findNodeInBST(root->right,  target);
	}
	else {
		return findNodeInBST(root->left,  target);
	}
}

int minVal(Node* root) {
	Node* temp = root;
	if(temp == NULL) {
		return -1;
	}

	while(temp -> left != NULL) {
		temp = temp ->left;
	}
	return temp -> data;
}

int maxVal(Node* root) {
	Node* temp = root;
	if(temp == NULL) {
		return -1;
	}

	while(temp -> right != NULL) {
		temp = temp ->right;
	}
	return temp -> data;
}

Node* deleteNodeInBST(Node* root, int target) {
	
	//base cae
	if(root == NULL ) {
		return NULL;
	}
//cout << "Request recieved for " >> root->data << " with target" << target << endl;
	if(root->data == target) {
		//isi ko delete krna h 
		//4 cases 
		if(root->left == NULL && root->right == NULL) {
			//leaf node
			//delete root;
			return NULL;
		}
		else if(root->left == NULL && root->right != NULL) {
			Node* child = root->right;
			//delete root;
			return child;
		}
		else if(root->left != NULL && root->right == NULL) {
			Node* child  = root->left;
			//delete root;
			return child;
		}
		else {
			//both child
			//find inorder predecessor inb left subtree
			int inorderPre = maxVal(root->left);
			//replace root->data value with inorder predecessor
			root->data = inorderPre;
			//delete inorder predecessor from left subtree
			root->left = deleteNodeInBST(root->left,inorderPre);
			return root;
			
		}
		
	}
	else if(target > root -> data) {
		//right jana chahiye
		root->right =  deleteNodeInBST(root->right, target);//deleted subtree right me laga denge
	}
	else if(target < root->data) {
		//left jana chahioye
		root->left = deleteNodeInBST(root->left, target);//deleted subtree left me laga denge
	}
	return root;
}
// void deleteNodeInBST(Node* root, int target) {   //wrong - Not working
	
// 	//base cae
// 	if(root == NULL ) {
// 		return;
// 	}
// 	Node* temp = findNodeInBST(root,target);

// 	if(temp->left == NULL && temp->right == NULL) {
// 			//leaf node
// 			delete temp;
// 			return;
// 		}
// 		else if(temp->left == NULL && temp->right != NULL) {
// 			Node* child = temp->right;
// 			delete temp;
// 			return;
// 		}
// 		else if(temp->left != NULL && temp->right == NULL) {
// 			Node* child  = temp->left;
// 			delete temp;
// 			return ;
// 		}
// 		else {
// 			//both child
// 			//find inorder predecessor inb left subtree
// 			int inorderPre = maxVal(temp->left);
// 			//replace temp->data value with inorder predecessor
// 			temp->data = inorderPre;
// 			//delete inorder predecessor from left subtree
// 			deleteNodeInBST(temp->left,inorderPre);
// 			return;
			
// 		}

// }



int main() {
	  Node* root = NULL;
	  cout << "Enter the data for Node " << endl;
	  takeInput(root);
	  cout << "Printing the tree" << endl;
	  levelOrderTraversal(root);
	  cout << endl;
	//   cout << "Printing Inorder: " << endl;
	//   inOrderTraversal(root);
	//   cout << endl;
	//   cout << "Printing Preorder: " << endl;
	//   preOrderTraversal(root);
	//   cout << endl;
	//   cout << "Printing Postorder: " << endl;
	//   postOrderTraversal(root);

	// bool ans  = findNodeInBST(root,155);
	// cout << "present or not : " << ans << endl;
	// cout << endl <<" Minimum value: " << minVal(root) << endl;
	// cout << endl << "Maximum value: " << maxVal(root) << endl;

	// 100 50 150 40 60 175 110 -1
	root = deleteNodeInBST(root, 100);
	levelOrderTraversal(root);
	
  return 0;
}