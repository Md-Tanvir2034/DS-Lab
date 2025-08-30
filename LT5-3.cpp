#include <iostream>  
// Name: Md. Tanvir Mahmud Soyad
// ID: 24-60390-3
// Course: Data Structure Lab
// Section: U

using namespace std;

#define MAXSIZE 5
int s[MAXSIZE];
int top;

void push(int value);
int pop();
int topp();
bool isStackEmpty();
bool isStackFull();
void display_stack();
int stackSize();
void stack_initialize();

void push(int value) {
    if (isStackFull()) {
        cout << "\tOverflow!!! Data Structure is Full ..." << endl;
    } else {
        s[top] = value;
        top++;
        cout << "\t" << value << " is pushed to the stack." << endl; // Added user-friendly notification
    }
}

int pop() {
    int x;
    if (isStackEmpty()) {
        cout << "\tUnderflow!!! Data Structure is Empty..." << endl;
        return NULL;
    } else {
        top--;
        x = s[top];
    }
    return x;
}

bool isStackEmpty() {
    return (top == 0);
}

bool isStackFull() {
    return (top >= MAXSIZE);
}

int stackSize() {
    return top;
}

void display_stack() {
    if (isStackEmpty()) {
        cout << "\tStack is empty!" << endl;
        return;
    }
    cout << "\tCurrent stack elements are:\n";
    for (int i = top - 1; i >= 0; i--) {
        cout << "\t" << s[i] << endl;
    }
}

int topp() {
    if (isStackEmpty()) {
        cout << "\tData Structure is Empty..." << endl;
        return NULL;
    }
    return s[top - 1];
}

void stack_initialize() {
    top = 0;
}

int main() {
    int option, n, value;
    stack_initialize();
    cout << "C++ program to implement a Stack Data Structure\n";
    
    do {
        cout << "\n\n1. Push an element ";
        cout << "\n2. Pop an element";
        cout << "\n3. Display the elements stored in this Data Structure ";
        cout << "\n4. Display current Data Structure size ";
        cout << "\n5. Display top element ";
        cout << "\n6. Exit";
        cout << "\nEnter your choice: ";
        cin >> option;
        
        switch (option) {
            case 1:
                cout << "\nInsert an element in the Data Structure: ";
                cin >> n;
                push(n);
                break;
            case 2:
                value = pop();
                if (value != NULL)
                    cout << "\n\tPopped element is: " << value << endl;
                break;
            case 3:
                display_stack();
                break;
            case 4:
                value = stackSize();
                cout << "\n\tCurrently number of elements in the Data Structure is " << value << endl;
                break;
            case 5:
                value = topp();
                if (value != NULL)
                    cout << "\n\tCurrent top element is " << value << endl;
                break;
            case 6:
                cout << "\nExiting the program. Goodbye!" << endl;
                return 0;
        }
    } while (option <= 6);
    
    return 0;
}
