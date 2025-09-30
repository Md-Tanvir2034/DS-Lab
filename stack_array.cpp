#include <iostream>
using namespace std;

const int MAX_SIZE = 100;
int stack[MAX_SIZE];
int top = -1;

void push(int value) {
    if (top >= MAX_SIZE - 1) {
        cout << "Stack Overflow" << endl;
        return;
    }
    top++;
    stack[top] = value;
    cout << value << " pushed" << endl;
}

void pop() {
    if (top < 0) {
        cout << "Stack Underflow" << endl;
        return;
    }
    cout << stack[top] << " popped" << endl;
    top--;
}

void peek() {
    if (top < 0) {
        cout << "Stack is empty" << endl;
        return;
    }
    cout << "Top element: " << stack[top] << endl;
}

void display() {
    if (top < 0) {
        cout << "Stack is empty" << endl;
        return;
    }
    
    cout << "Stack elements: ";
    for (int i = top; i >= 0; i--) {
        cout << stack[i] << " ";
    }
    cout << endl;
}

void checkEmpty() {
    if (top < 0) {
        cout << "Stack is empty" << endl;
    } else {
        cout << "Stack is not empty" << endl;
    }
}

void getSize() {
    cout << "Stack size: " << top + 1 << endl;
}

int main() {
    int choice;
    int value;
    
    cout << "Stack Implementation" << endl;
    
    while (true) {
        cout << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
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
            push(value);
        }
        else if (choice == 2) {
            pop();
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