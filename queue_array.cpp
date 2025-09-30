#include <iostream>
using namespace std;


const int MAX_SIZE = 100;
int queue[MAX_SIZE];
int front = -1;
int rear = -1;

void enqueue(int value) {
    if (rear >= MAX_SIZE - 1) {
        cout << "Queue Overflow" << endl;
        return;
    }
    if (front == -1) {
        front = 0;
    }
    rear++;
    queue[rear] = value;
    cout << value << " enqueued" << endl;
}

void dequeue() {
    if (front == -1 || front > rear) {
        cout << "Queue Underflow" << endl;
        return;
    }
    cout << queue[front] << " dequeued" << endl;
    front++;
    if (front > rear) {
        front = -1;
        rear = -1;
    }
}

void peek() {
    if (front == -1 || front > rear) {
        cout << "Queue is empty" << endl;
        return;
    }
    cout << "Front element: " << queue[front] << endl;
}

void display() {
    if (front == -1 || front > rear) {
        cout << "Queue is empty" << endl;
        return;
    }
    
    cout << "Queue elements: ";
    for (int i = front; i <= rear; i++) {
        cout << queue[i] << " ";
    }
    cout << endl;
}

void checkEmpty() {
    if (front == -1 || front > rear) {
        cout << "Queue is empty" << endl;
    } else {
        cout << "Queue is not empty" << endl;
    }
}

void getSize() {
    if (front == -1 || front > rear) {
        cout << "Queue size: 0" << endl;
    } else {
        cout << "Queue size: " << rear - front + 1 << endl;
    }
}

int main() {
    int choice;
    int value;
    
    cout << "Queue Implementation" << endl;
    
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