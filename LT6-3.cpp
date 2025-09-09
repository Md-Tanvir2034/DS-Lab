#include <iostream>

//Md. Tanvir Mahmud Soyad
//ID: 24-60390-3
//Course: Data Structures
//Section : U 

using namespace std;


struct Book{
    int Price;
    int NoOfPages;
};


int main() {

    Book b[3];

    for (int i = 0; i < 3; i++) {
        
        cin >> b[i].Price;
        cin >> b[i].NoOfPages;
    
    }
    

    for (int i = 0; i < 3; i++) {

        cout <<b[i].Price ;
        cout <<b[i].NoOfPages;
    }
 
    return 0;

}