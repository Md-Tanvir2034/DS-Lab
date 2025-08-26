#include <iostream>
//Md. Tanvir Mahmud Soyad
//24-60390-3
//section U
using namespace std;

int main(){
    int arr[6] = {92, 82,21, 16, 18, 95};

    int counter = 1 ;

    while( counter < 6){
        for(int i = 0 ; i < 6- counter ; i++){
            if(arr[i] > arr[i+1]){
                swap(arr[i], arr[i+1]);
            }
        }
        counter++;
    }
    cout << "Bubble Sorted array: ";
    for(int i = 0 ; i < 6 ; i++){
        cout << arr[i] << " ";
    }
}