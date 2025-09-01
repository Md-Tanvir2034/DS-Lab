#include <iostream>
using namespace std;

// Name: Md. Tanvir Mahmud Soyad
// ID: 24-60390-3
// Course: Data Structure Lab
// Section: U

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

        cout << "\tOverflow!!! Queue is Full. Cannot add " << element << "." << endl;
    }

    else if (isQueueEmpty()) {

        front = rear = 0;

        q[rear] = element;

         cout << "\t" << element << " has been added to the queue." << endl;

         cout << "\tThis is now the front element." << endl;
    }

    else {

        rear++;

        q[rear] = element;

         cout << "\t" << element << " has been added to the rear of the queue." << endl;
    }


}

int dequeue() {

    if (isQueueEmpty()) {

        cout << "\tUnderflow!!! Queue is Empty. Nothing to remove." << endl;

        return -1;

    }

    else {

        int dequeueElement = q[front];


        if (front == rear) {

            cout << "\t" << dequeueElement << " has been removed from the queue." << endl;

            cout << "\tThe queue is now empty." << endl;

            front = rear = -1;

        }

        else {

            cout << "\t" << dequeueElement << " has been removed from the front of the queue." << endl;

            cout << "\tNew front element is: " << q[front+1] << endl;

            front++;

        }


        return dequeueElement;
    }
}

bool isQueueEmpty() {

    return (front == -1 && rear == -1);

}

bool isQueueFull() {


    return (rear == (MAXSIZE - 1));

}

int frontElement() {

    if (isQueueEmpty()) {

        cout << "\tQueue is Empty. No front element." << endl;

        return -1;

    }

    else {

        return q[front];

    }
}

int queueSize() {

    if (isQueueEmpty()) return 0;

    return (rear - front + 1);
}

void display_queue() {

    if (isQueueEmpty()) {

        cout << "\tQueue is empty!" << endl;

    }

    else {

        cout << "\tCurrent queue elements (front to rear): ";

        for (int i = front; i <= rear; i++) {

            cout << q[i] << " , ";


        }

        cout << endl;

        cout << "\tCurrent front element: " << q[front] << endl;

        cout << "\tCurrent rear element: " << q[rear] << endl;

        cout << "\tTotal elements: " << queueSize() << "/" << MAXSIZE << endl;
    }
}

int main() {
    front = rear = -1;
    int option, n, value;


    cout << "        QUEUE DATA STRUCTURE PROGRAM" << endl;
    cout << "=============================================" << endl;

    cout << "This Program implements a queue  with a maximum size of : " << MAXSIZE << "." << endl;

    do {

        cout << "MAIN MENU:" << endl;

        cout << "----------------------------------------" << endl;

        cout << "1. ADD an element : " << endl;

        cout << "2. Remove an element : " << endl;

        cout << "3. Display the elements  stored in the queue :" << endl;

        cout << "4. Display current queue size : " << endl;

        cout << "5. Display front element : " << endl;

        cout << "6. Exit" << endl;

        cout << "Enter your choice : ";

        cin >> option;

        cout << endl;

        switch (option) {
            case 1:
                cout << "Enter the element to add to the queue: ";

                cin >> n;

                enqueue(n);

                break;

            case 2:

                value = dequeue();

                break;

            case 3:

                display_queue();

                break;

            case 4:

                value = queueSize();

                cout << "\tCurrent number of elements in the queue: " << value <<  endl;

                break;

            case 5:

                value = frontElement();

                if (value != -1)

                    cout << "\tFront element is: " << value << endl;

                break;

            case 6:

                cout << "Exiting the program. Goodbye!" << endl;

                return 0;

            default:

                cout << "Invalid option! Please try again." << endl;

        }

        cout << endl;

        cout << "---------------------------------------------" << endl << endl;

    } while (option <= 6);

    return 0;
}
