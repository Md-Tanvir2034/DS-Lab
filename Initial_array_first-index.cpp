# include <iostream>
using namespace std;

int main() {
    int n = 5 ;
    int mimo[n] = {10, 20, 30, 40, 50};
    n++;

    for(int i = n ; i > 0 ; i--){
        mimo[i] = mimo[i-1];
         
    }

    mimo[0] = 100; 

    for(int i = 0 ; i < n ; i++){
        cout << "Value at index " << i << ": " << mimo[i] << endl; 
    }
}