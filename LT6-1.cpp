#include <iostream>

//Md. Tanvir Mahmud Soyad
//ID: 24-60390-3
//Course: Data Structures
//Section : U 


using namespace std;

int main() {

/* POINTER: A pointer is a variable that stores 
the location of memory. In more fundamental terms,a pointer stores the address of a variable. In more picturesque terms, a pointer points to a variable.
A pointer has to be  declared just like other variables.
For example : int *p; is a pointer to an integer.
Adding an asterisk   (called the de reference operator)
in front of a variable's name declares it to be a pointer
to the declared type. For example: int *p , q ; declares p ,
a pointer to int , and q an int and the instruction: p=&q;
(called the address-of operator) stores the address of q in p.
After this instruction, conceptually, p is pointing at q .
*/
 
int x;

x = 10;

int *p;

p = &x;
 
cout<<"Address of integer variable x: "<< &x <<endl;
cout<<"Value stored in the memory area of variable x: "<< x <<endl;
cout<<"Address of integer pointer variable *p: "<< &p <<endl;
cout<<"Address stored in the area of the pointer variable *p:"<< p <<endl;
cout<<"Value pointed to by the pointer *p:"<< *p <<endl;
    
    return 0;
}