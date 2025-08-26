#include <iostream>

//Md. Tanvir Mahmud Soyad
//24-60390-3
//section U

using namespace std;

int main()
{

    int item, position = -1;
    int f_index = 0, l_index = 5, m_index = 0;
    int arr[6] = { 16, 18, 21 , 82 , 92 , 95};
    
    
    cout << "Enter the item to search: ";
    cin >> item;

    while( f_index <= l_index) {
        m_index  = ( f_index + l_index) / 2;
        
        if( item < arr[m_index]) {
            l_index= m_index - 1;
            
        }
        else if( item > arr[m_index]) {
            f_index = m_index + 1;
            
        }
        else {
            position = m_index;
            cout << "Item found at index: " << position << endl;
            
            break;
        }
    }
    
    if(position == -1) {
        cout << "Item not found in the array." << endl;
    }
    
    return 0;
}
