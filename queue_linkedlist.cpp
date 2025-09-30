#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* front = NULL;
Node* rear = NULL;

void enqueue(int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = NULL;
    
    if (rear == NULL) {
        front = newNode;
        rear = newNode;
    } else {
        rear->next = newNode;
        rear = newNode;
    }
    cout << value << " enqueued" << endl;
}

void dequeue() {
    if (front == NULL) {
        cout << "Queue Underflow" << endl;
        return;
    }
    
    Node* temp = front;
    cout << front->data << " dequeued" << endl;
    front = front->next;
    
    if (front == NULL) {
        rear = NULL;
    }
    
    delete temp;
}

void peek() {
    if (front == NULL) {
        cout << "Queue is empty" << endl;
        return;
    }
    cout << "Front element: " << front->data << endl;
}

void display() {
    if (front == NULL) {
        cout << "Queue is empty" << endl;
        return;
    }
    
    cout << "Queue elements: ";
    Node* current = front;
    while (current != NULL) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

void checkEmpty() {
    if (front == NULL) {
        cout << "Queue is empty" << endl;
    } else {
        cout << "Queue is not empty" << endl;
    }
}

void getSize() {
    int count = 0;
    Node* current = front;
    while (current != NULL) {
        count++;
        current = current->next;
    }
    cout << "Queue size: " << count << endl;
}

int main() {
    int choice;
    int value;
    
    cout << "Queue Implementation using Linked List" << endl;
    
    while (true) {
        cout << endl;
        cout << "1. Enqueue" << endl;
        cout << "2. Dequeue" << endl;
        cout << "3. Peek" << endl;
        cout << "4. Display" << endl;
        cout << "5. Check Empty" << endl;
        cout << "6. Get Size" << endl;
        cout << "7. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;
        
        if (choice == 1) {
            cout << "Enter value: ";
            cin >> value;
            enqueue(value);
        }
        else if (choice == 2) {
            dequeue();
        }
        else if (choice == 3) {
            peek();
        }
        else if (choice == 4) {
            display();
        }
        else if (choice == 5) {
            checkEmpty();
        }
        else if (choice == 6) {
            getSize();
        }
        else if (choice == 7) {
            cout << "Exiting program" << endl;
            break;
        }
        else {
            cout << "Invalid choice" << endl;
        }
    }
    
    return 0;
}