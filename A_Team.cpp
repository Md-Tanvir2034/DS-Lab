#include <iostream>

using namespace std;

int main() {
    int lines;
    cin >> lines;
    int count = 0;

    int arr[lines][3];

    for(int i = 0 ; i < lines ; i++){
    
        cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
    }

    for(int i  = 0 ; i < lines ; i++){
        if(arr[i][0] + arr[i][1]+ arr[i][2] >=2){
            count++;
        }
    }

    cout << count << endl;
    return 0;
}