#include <iostream>

//Md. Tanvir Mahmud Soyad
//24-60390-3
//section U

using namespace std;

int main()
{
      int i , item , arr[4] = {45 , 67 , 89 , 98} ;
      bool found = false ;
      cout << "Enter you Target value : " << endl ;
      cin >> item;
      for(i=0 ; i < 4 ; i++) {
         if(arr[i] == item) { 
             cout <<"index of elements is : " << i << endl;
             found = true;
             break ;
           }
        }
    if(found== false ){
         cout << "elements not found " ;
    }
     return 0;
}