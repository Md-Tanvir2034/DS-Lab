#include<iostream>
//Name: Md. Tanvir Mahmud Soyad
//ID: 24-60390-3    
//Course: Data Structures Lab
//Section : U

using namespace std;

int main(){
    int arr1[2][2]={1,2,3,4};
    int arr2[2][2]={3,2,3,4};

    for(int i = 0 ; i < 2 ; i++){
        for(int j = 0 ; j < 2 ; j++){
            cout << arr1[i][j]+arr2[i][j] << endl ;
        }
    }

    for(int i = 0 ; i < 2 ; i++){
        for(int j = 0 ; j < 2 ; j++){
            cout << arr1[i][j]-arr2[i][j] << endl ;
        }
    }
    
    cout << "Hello world" << endl ;
    return 0 ;
}
