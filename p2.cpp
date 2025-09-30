#include<iostream>
using namespace std;

int main(){
    int arr[5] = {1 , 2 , 3 , 4 , 5};
    int mid , first , last ;
    first = 0 ;
    last = 4 ;
    bool found = false ;
    int target = 3 ;

    while(first <= last){
       mid = (first + last) / 2 ;

       if(arr[mid] == target ){
        cout << "found index : " << mid ;
        found = true ;
        break ;
       }

       else if(arr[mid] < target){
        last = mid -1 ;
       }

       else if(arr[mid] > target ){
        first = mid + 1 ;
       }

    }

    if(!found){
        cout << " not found ." ;
    }
}