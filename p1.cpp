#include<iostream>

using namespace std;

int main(){
    int arr[5] = {2 ,3,8,45,6};
    int target = 45 ;
    bool found = false ;

    for(int i = 0 ; i < 5 ; i++){
        if(arr[i]==target){
            cout << "Index : " << i ;
            found = true;

        }
    }

    if(!found){
        cout << "Not found" ;
    }
}