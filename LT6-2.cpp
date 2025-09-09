#include <iostream>

//Md. Tanvir Mahmud Soyad
//ID: 24-60390-3
//Course: Data Structures
//Section : U 

using namespace std;

struct cricketer {
    int jersey_no;
    int jersey_nos(){
        jersey_no = 7;
        return jersey_no;
    }

    int display(){
        cout <<  jersey_no ;     
    }
};


int main() {
    struct cricketer s1;

    
    s1.jersey_nos();
    s1.display();

    return 0;
}