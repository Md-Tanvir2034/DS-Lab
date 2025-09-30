#include <iostream>
using namespace std;

// Name : Md. Tanvir Mahmud Soyad
// ID   : 24-60390-3
// Course: Data Structure Lab
// Section: U

struct Node {
    int data;
    Node* left;
    Node* right;
};


Node* createNode (int value) {
    Node* n = new Node;

    n->data = value;
    n->left = nullptr;
    n->right = nullptr;

    return n;
}


Node* insertNode(Node* root, int value) {

    if (root == nullptr) 
    return createNode(value );
    if (value < root->data) 
    root->left  = insertNode(root->left , value );
    else if (value > root->data) 
    root->right = insertNode(root->right , value);
    return root;
}


Node* searchNode(Node* root , int value) {
    if (root == nullptr || root->data == value)
     return root;
    if (value < root->data) 
    return searchNode(root->left , value);
    return searchNode(root->right, value);
}


Node* maxValue( Node* root) {
    while (root->right != nullptr) root = root->right;
    return root;
}


Node* deleteNode (Node* root, int value) {
    if (root == nullptr)
     return root;

    if (value < root->data) 
    root->left = deleteNode(root->left, value);
    else if (value > root->data) 
    root->right = deleteNode(root->right, value);
    else {
        
        if (root->left == nullptr) {

            Node* t = root->right;
            delete root;
            return t;
        } 
        else if (root->right == nullptr) {
            Node* t = root->left;
            delete root;
            return t;
        }

        
        Node* t = maxValue(root->left);
        root->data = t->data;
        root->left = deleteNode(root->left, t->data);
    }

    return root;
}


void inorder(Node* root) {
    if (root == nullptr)
     return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void preorder(Node* root) {

    if (root == nullptr) return;

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}


void postorder(Node* root) {

    if (root == nullptr)
     return;

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int main() {
    Node* root = nullptr;
    int n, value;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter " << n << " values: ";
    for (int i = 0; i < n; i++) {
        cin >> value;
        root = insertNode(root, value);
    }

    int choice;
    while (true) {

        cout << "Menu: " << endl;
        cout << "1. Insert " << endl << "2. Search " << endl << "3. Delete " << endl << "4. Inorder " << endl ;
        cout << "5. Preorder " << endl << "6. Postorder " << endl << "0. Exit " << endl;

        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 0) break;

        switch (choice) {
            case 1:
                cout << "Enter value to insert: ";
                cin >> value;
                root = insertNode(root, value);
                break;

            case 2:
                cout << "Enter value to search: ";
                cin >> value;
                if (searchNode(root, value))
                    cout << "Found" << endl;
                else
                    cout << "Not Found" << endl;
                break;

            case 3:
                cout << "Enter value to delete: ";
                cin >> value;
                root = deleteNode(root, value);
                cout << "Delete done (if present)" << endl;
                break;

            case 4:
                cout << "Inorder: ";
                inorder(root);
                cout << endl;
                break;

            case 5:
                cout << "Preorder: ";
                preorder(root);
                cout << endl;
                break;

            case 6:
                cout << "Postorder: ";
                postorder(root);
                cout << endl;
                break;

            default:
                cout << "Invalid choice" << endl;
        }
    }
    return 0;
}
