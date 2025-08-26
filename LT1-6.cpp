#include <iostream>

using namespace std;

int sum(int num1 , int num2){
    int sum = num1 + num2 ;
     cout  << endl ;
     cout << " sum of your number : " << sum << endl ;
     return sum ;
}

int main()
{   //Md. Tanvir Mahmud Soyad
    //24-60390-3
    //Data Structure
    //section U

    int num1 , num2 ;
     cout << "number 1 : " << endl ;
     cin >> num1 ;

     cout << "number 2 : " << endl ;
     cin >> num2 ;
     sum(num1 , num2) ;
    return 0;
}
