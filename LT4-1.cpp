#include <iostream>
using namespace std;

int main() {
    int mi , size =4 ;
    int arr[4] ={ 98 , 56 , 65 , 23};

    cout << "Unsorted array: " << endl;
    for(int i = 0 ; i < size ; i++){
        cout <<  " index: " << i << " element : " << arr[i] << endl;
    }

    for(int i = 0 ; i < size -1 ; i++){
        mi = i ;

        for(int j = i+ 1 ; j < size ; j++){
            if(arr[j] < arr[mi]){
                mi = j;
            }
        }

        if(mi != i)
            swap(arr[i], arr[mi]);

    }
    cout << "Sorted array: " << endl;
    for(int i = 0 ; i < size ; i++){
        cout <<  " index: " << i << " element : " << arr[i] << endl;

    }

    return 0;

}