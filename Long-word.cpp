#include <iostream>
using namespace std;

int main() {
   int size ;
   cin >> size ;
   string* arr = new string[size];
   for(int i = 0 ; i < size ; i++){
    cin >> arr[i];
   }

   for(int i = 0 ; i < size ; i++){
       if(arr[i].length() > 10 ){
        cout << arr[i][0] << arr[i].length() - 2 << arr[i][arr[i].length()-1] << endl ;
        
       }
         else{
          cout << arr[i] << endl ;
       }
   }

    return 0;
}