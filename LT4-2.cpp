
#include<iostream>
using namespace std;

int main(){
       int size=4;
       int arr[4] ;

    cout << "Enter 4 elements: ";
    for(int i=0; i<size; i++) {
        cin >> arr[i];
    }

    cout << "Unsorted array: " << endl;
    for(int i=0; i<size; i++) {
        cout << " index: " << i << " element : " << arr[i] << endl;
    }

    for(int i=0; i<size-1; i++) {

        for(int j=0 ; j<size-i-1; j++) {

            if(arr[j]>arr[j+1]) {

                swap(arr[j], arr[j+1]);
                
            }
        }
    }
    

    cout << "Sorted array: " << endl;
    for(int j=0;j<size;j++)
        cout<<" index: " << j << " element : " << arr[j] << endl;

    return 0;

}


