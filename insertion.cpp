#include <iostream>

using namespace std;

int main(){
    int arr[5] = {6 , 3 , 8 , 5 , 2};
    int i , j , key ; 

    for(i = 1 ; i < 5 ; i++){
        key = arr[i] ;
        j = i -1 ; 
        while(j >= 0 && arr[j] > key){
            arr[j+1] = arr[j] ;
            j-- ;
        }
        arr[j+1] = key ;
    }
    
    for(i = 0 ; i < 5 ; i++){
        cout << arr[i] << " ";
    }
    return 0;
}