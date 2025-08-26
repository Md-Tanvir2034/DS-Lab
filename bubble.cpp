#include<iostream>

using namespace std;

int main(){
    
    int arr[5] = {6 , 3 , 8 , 5 , 2};

    for(int i = 5 ; i > 0 ; i--){
        for( int j = 0 ; j < i - 1 ; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
    
    for(int i = 0 ; i < 5 ; i++){
        cout << arr[i] << " ";
    }
    return 0;
}