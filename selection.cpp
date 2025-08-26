#include <iostream>
using namespace std;

int main(){
    int arr[5] = {6 , 3 , 8 , 5 , 2};
    int i , j ;
    int min_index;
    for(i = 0 ; i < 5 ; i++){
        min_index = i ;

        for(j = i + 1 ; j < 5 ; j++){
            if(arr[j] < arr[min_index]){
                min_index = j ;
            }
        }
        swap(arr[i], arr[min_index]);
    }

    for(i = 0 ; i < 5 ; i++){
        cout << arr[i] << " " ;
    }
    
    return 0;
}