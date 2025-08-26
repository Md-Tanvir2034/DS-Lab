#include<iostream>

using namespace std;

int main (){
    int mimo[5] , a , b , i ;  // declaration
    mimo[2] = 75 ;  // mimo indx 2 value is 75
    a = mimo[2] ; //mimo index 2 value is assigned to a

    cin >> mimo[2] ; // user input for mimo index 2

    for(i = 0 ; i < 5 ; i++){
        cout << "Enter value for mimo index " << i << ": ";
        cin >> mimo[i]; 
    }

    a = 4 ;
    mimo[2] = a ; 
    mimo[a] = 3 ; 

    b = mimo[a-2] + mimo[a];  

    mimo[mimo[a]] = mimo[2] + b ; 




}