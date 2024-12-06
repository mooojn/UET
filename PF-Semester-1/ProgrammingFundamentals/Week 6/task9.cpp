#include<iostream>

using namespace std;

string checkTitle(int, char);

main(){
    int age;
    char gender;

    cout << "Enter your age: ";
    cin >> age;
    
    cout << "Enter your gender (m/f): ";
    cin >> gender;

    string title;
    title = checkTitle(age, gender);
    cout << "Your personal title is: "<< title;

}

string checkTitle(int age, char gender){
    if (gender == 'm'){
        if(age >= 16){
            return "Mr.";
        }
        return "Master";
    }

    else{
        if(age >= 16){
            return "Ms.";
        }
        return "Miss";

    }


}