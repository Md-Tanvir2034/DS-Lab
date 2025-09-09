#include <iostream>

using namespace std;

int main()
{   //Md. Tanvir Mahmud Soyad
    //24-60390-3
    //Data Structure
    //section U



    for(int i = 0 ; i < 4 ; i++){
        for(int k = 0; k < 4 - i; k++){
            cout << " " ;
        }
        for(int j = 0 ; j < i*2+1 ; j++){
            cout << "*"  ;
        }
        cout << endl ;
    }

    for(int i = 4 ; i > 0 ; i--){
        for(int k = 4 - i ; k >= 0 ; k--){
            cout << " " ;
        }

        for(int j =i*2-1  ; j > 0 ; j--){
            cout << "*"  ;
        }
        cout << endl ;
    }

    return 0;
}

