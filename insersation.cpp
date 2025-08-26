#include<iostream>
using namespace std;

int main() {
    int a[7] = {17, 22, 35, 47, 8, 69, 5};  
    int i, j, key;
    

    for(i = 1; i < 7; i++) { 
        key = a[i];  
        j = i - 1;

        
        while(j >= 0 && a[j] > key) {
            a[j + 1] = a[j];  
            j--;
        }
        a[j + 1] = key; 
    }

  
    for(i = 0; i < 7; i++) {
        cout << a[i] << " ";
    }
    return 0;
}
