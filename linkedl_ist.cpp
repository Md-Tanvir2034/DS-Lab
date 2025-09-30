#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = NULL;

void addNode(int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = NULL;
    
    if (head == NULL) {
        head = newNode;
    } else {
        Node* current = head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newNode;
    }
    cout << value << " added to list" << endl;
}

void addAtBeginning(int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = head;
    head = newNode;
    cout << value << " added at beginning" << endl;
}

void deleteNode(int value) {
    if (head == NULL) {
        cout << "List is empty" << endl;
        return;
    }
    
    if (head->data == value) {
        Node* temp = head;
        head = head->next;
        delete temp;
        cout << value << " deleted from list" << endl;
        return;
    }
    
    Node* current = head;
    Node* prev = NULL;
    
    while (current != NULL && current->data != value) {
        prev = current;
        current = current->next;
    }
    
    if (current == NULL) {
        cout << value << " not found in list" << endl;
        return;
    }
    
    prev->next = current->next;
    delete current;
    cout << value << " deleted from list" << endl;
}

void searchNode(int value) {
    Node* current = head;
    int position = 1;
    
    while (current != NULL) {
        if (current->data == value) {
            cout << value << " found at position " << position << endl;
            return;
        }
        current = current->next;
        position++;
    }
    
    cout << value << " not found in list" << endl;
}

void displayList() {
    if (head == NULL) {
        cout << "List is empty" << endl;
        return;
    }
    
    cout << "List elements: ";
    Node* current = head;
    while (current != NULL) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

void getSize() {
    int count = 0;
    Node* current = head;
    while (current != NULL) {
        count++;
        current = current->next;
    }
    cout << "List size: " << count << endl;
}

void checkEmpty() {
    if (head == NULL) {
        cout << "List is empty" << endl;
    } else {
        cout << "List is not empty" << endl;
    }
}

int main() {
    int choice;
    int value;
    
    cout << "Linked List Implementation" << endl;
    
    while (true) {
        cout << endl;
        cout << "1. Add node at end" << endl;
        cout << "2. Add node at beginning" << endl;
        cout << "3. Delete node" << endl;
        cout << "4. Search node" << endl;
        cout << "5. Display list" << endl;
        cout << "6. Check if empty" << endl;
        cout << "7. Get size" << endl;
        cout << "8. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;
        
        if (choice == 1) {
            cout << "Enter value to add: ";
            cin >> value;
            addNode(value);
        }
        else if (choice == 2) {
            cout << "Enter value to add at beginning: ";
            cin >> value;
            addAtBeginning(value);
        }
        else if (choice == 3) {
            cout << "Enter value to delete: ";
            cin >> value;
            deleteNode(value);
        }
        else if (choice == 4) {
            cout << "Enter value to search: ";
            cin >> value;
            searchNode(value);
        }
        else if (choice == 5) {
            displayList();
        }
        else if (choice == 6) {
            checkEmpty();
        }
        else if (choice == 7) {
            getSize();
        }
        else if (choice == 8) {
            cout << "Exiting program" << endl;
            break;
        }
        else {
            cout << "Invalid choice" << endl;
        }
    }
    
    return 0;
}