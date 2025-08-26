#include<iostream>
 using namespace std;   

int main(){
    int arr[5] = {2, 3, 5, 6, 8};
    int target = 5;
    int low = 0;
    int high = 4;
    while(low <= high){
        int mid = (low + high) / 2;
        if(arr[mid] == target){
            cout << "Element found at index: " << mid << endl;
            return 0;
        }
        else if(arr[mid] < target){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    cout << "Element not found" << endl;
    return 0;
}
      

       