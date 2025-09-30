#include<iostream>
using namespace std;

int main(){
    int arr[5] = {2 ,3,8,45,6};
    int key;
    int j;

    for(int i = 1 ; i < 5 ; i++ ){
        j=i-1; key= arr[i];

        while (j>= 0 && arr[j] > key ){
            arr[j+1] = arr[j];
            j--;          
        }

        arr[j+1] = key ;
    }

    for(int i = 0 ; i < 5 ; i++){
        cout << arr[i] << " " ;
    }
}