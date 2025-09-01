
#include <iostream>

// Name: Md. Tanvir Mahmud Soyad
// ID: 24-60390-3
// Course: Data Structure Lab
// Section: U

using namespace std;
 
#define MAXSIZE 5

int q[MAXSIZE];

int front, rear;
 
 void enqueue(int element);

int dequeue();

bool isQueueEmpty();

int queueSize();

bool isQueueFull();



void display_queue();


 
void enqueue(int element) {

    if (isQueueFull()) {


        cout << "\tThe Data Structure is Full..." << endl;

     } 
    
    else if (isQueueEmpty()) {

        front = rear = 0;

        q [rear] = element;

     } 
    
    else {

        rear++;

        q[rear] = element;

    }

}
 
int dequeue() {

    int dequeueElement = q [front];

    if (isQueueEmpty()) {

        cout << "The Data Structure is empty! Dequeue not possible" << endl;

        return NULL;

    } 
    
    else if (front == rear) {

        front = rear = -1;

    } 
    
    else {

        front++;

    }

     return dequeueElement;

 }
 
bool isQueueEmpty() {
    if (front == -1 && rear == -1)

        return true;
    else
        return false;
}
 
bool isQueueFull() {

    if (rear == (MAXSIZE - 1))

        return true;

    else

        return false;
}
 
int frontElement() {

    if (isQueueEmpty())

        return NULL;

    else

        return q[front];

}
 
int queueSize() {

    return (rear - front);

}
 
void display_queue() {

    if (isQueueEmpty()) {

        cout << "The Data Structure is empty ! Nothing to show" << endl;

    } 
    
    else {

        for (int i = front; i <= rear; i++) {

            cout << q[i] << "\t";

        }

        cout << endl;

    }

}
 
int main() {

    front = rear = -1;

    int option, n, value;
 
    cout << "C++ program to implement a specific Data Structure \n";
 
    do {

        cout << "\n1. Insert an element";

        cout << "\n2. Delete an element";

        cout << "\n3. Display the elements stored in this Data Structure";

        cout << "\n4. Exit";

        cout << "\nEnter your choice: ";

        cin >> option;
 
        switch (option) {

        case 1:

            cout << "Insert an element in the Data Structure: ";

            cin >> n;

            enqueue(n);

            break;

        case 2:

            value = dequeue();

            if (value != NULL)

                cout << "Dequeued element is: " << value << endl;

            break;

        case 3:

            display_queue();

            break;

        case 4:

            return 0;

        }

    } while (option != 4);
 
    return 0;

}
 
 