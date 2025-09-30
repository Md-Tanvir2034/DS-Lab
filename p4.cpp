#include<iostream>
using namespace std;

int main(){
    int arr[5] = {2 ,3,8,45,6};

    for(int k = 4 ; k >= 0 ; k--){
        for(int i = 0 ; i < 4 ; i++){
            if(arr[i] > arr[i+1]){
                swap(arr[i] , arr[i+1]);
            }
        }
    }

    for(int i = 0 ; i < 5 ; i++){
        cout << arr[i] << " " ;
    }
}