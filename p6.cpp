#include <iostream>

using namespace std;

selection(int arr[]){
    int min ;

    for(int i = 0 ; i < 5 ; i++){
        min = i ;

        for(int j = i ; j < 5 ; j++){
            if(arr[j] < arr[min]){
                min = j ;
            }
        }
        swap(arr[i] , arr[min]);
    }

    for(int i = 0 ; i < 5 ; i++){
        cout << arr[i] << " ";
    }
}

insertion(int arr[]){
    int j ;
    int key ;

    for(int i = 1 ; i < 5 ; i++){
       key = arr[i] ;
       j = i -1 ;

       while(j>=0 && arr[j] > key){
        arr[j+1] = arr[j] ;
        j--;
       }

       arr[j+1] = key ;
    }

     for(int i = 0 ; i < 5 ; i++){
        cout << arr[i] << " ";
    }
}



bubble(int arr[]){

    for(int k = 5-1 ; k >= 0 ; k--){
        for(int i = 0 ; i < k ; i++){
            if(arr[i] > arr[i+1]){
                swap(arr[i], arr[i+1]);
            }
        }
    }

     for(int i = 0 ; i < 5 ; i++){
        cout << arr[i] << " ";
    }
}

binary(int arr[]){
    int mid , first , last ;
    first = 0 ; 
    last = 4 ;
}

int main()
{
    int arr[5] = {5 , 3 , 4 , 9 ,1};

    selection(arr);
    cout << endl ;
    insertion(arr);
    cout << endl ;
    bubble(arr);
    
    

    return 0;
}
