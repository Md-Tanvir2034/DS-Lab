#include<iostream>

using namespace std;

class Node{
    public:
    int data ;
    Node* next;

    Node(int val){
        data = val ;
        next = NULL ;
    }

};


class List {
    Node* head;
    Node* tail;


    public: 

    List(){
    head = tail = NULL ;
    }

    void push_front(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            if(head == NULL){
                head = tail = newNode;
                return;
            } else {
                newNode -> next = head ;
                head = newNode ;
            }
        }

    }

}




int main(){

    List myList;

        myList.push_front(10);
        myList.push_front(20);
        myList.push_front(30);

    return 0 ;
}