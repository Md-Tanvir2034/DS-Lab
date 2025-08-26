#include<iostream>
#include<cstring>

//Name : Md. Tanvir Mahmud Soyad
//ID: 24-60390-3
//course: Data Structure Lab
//Section : U

using namespace std;


int main(){
    char arr[][100] = {"Cinderella" , "Mermaid" , "Push in Boots" , "Rumplestiltskin" , "Little Red Riding Hood" , "Sleeping Beauty" , "Goldlocks and the Three Bears" , "Aladdin" , "Blue Fairy" , "Tinkerbell" , "Humpty Dumpty" , "WonderLand" , "Jungle King"};
    int n = sizeof(arr) / sizeof(arr[0]);
    int min;
    for (int i = 0 ; i < n -1 ; i++ ){
        
        min = i ;

        for(int j = i + 1 ; j < n ; j++){

            if(strcmp(arr[j], arr[min]) < 0){
                min = j ;
            }
        }
    
       swap (arr[i], arr[min]);
    }

    cout << "Sorting books Alphabetically:" << endl;

    for (int i = 0; i < n; i++) {
        cout << i + 1 << ". " << arr[i] << endl;
    }


    for (int i = 0; i < n; i++) {
        int count = 0 ; 

        for(int j = 0 ; j < 100 ; j++){
            char word = arr[i][j];

            if((word >= 'A' && word <= 'Z') || (word >= 'a' && word <= 'z')){
                count++;
            }
        }

        cout << "Number of alphabetic characters in " << arr[i] << " : " << count << endl;

    }

    return 0;
}