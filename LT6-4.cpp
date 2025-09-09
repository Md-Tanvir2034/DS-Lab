#include<iostream>

using namespace std;

//Md. Tanvir Mahmud Soyad
//ID: 24-60390-3
//Course: Data Structures
//Section : U 

#include <iostream>

using namespace std;


struct Student {
    string Name;
    int ID;
    int Semester;
    int Age;
    float CGPA;
};


int main(){
    Student s1[10];

    for(int i = 0; i < 10; i++){
        cout << "Enter student details of " << i+1 << " :" << endl;
        cout <<" Name : ";
        cin >> s1[i].Name;
        cout <<" ID : ";
        cin >> s1[i].ID;
        cout <<" Semester : ";
        cin >> s1[i].Semester;
        cout <<" Age : " ;
        cin >> s1[i].Age;
        cout <<" CGPA : " ;
        cin >> s1[i].CGPA;
    }

    float average = 0;
    float sum = 0;
    for(int i = 0; i < 10; i++){
        sum = sum + s1[i].CGPA;

    }

    average = sum / 10;
    cout << "Average CGPA of 10 students : " << average << endl;

    cout << "Students who are under probation :" << endl ;
    for(int i = 0; i < 10; i++){
        if(s1[i].CGPA < 2.50){
            cout << "Name : " << s1[i].Name << endl ;
            
        }
    }

    cout << "Students who are above 21 years old :" << endl ;
    for(int i = 0; i < 10; i++){
        if(s1[i].Age > 21){
            cout << "Name : " << s1[i].Name << endl ;
        }
    }

    cout << "Students who are in last semester(12th) :" << endl ;
    for(int i = 0; i < 10; i++){
        if(s1[i].Semester == 12){
            cout << "Name : " << s1[i].Name << endl ;
        }
    }

}