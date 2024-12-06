#include<iostream>

using namespace std;

float totalIncome(string, int, int);

main(){
    string screenType;
    int rows, columns;

    cout << "Enter the screening type (Premiere/Normal/Discount): ";
    cin >> screenType;
    
    cout << "Enter the number of rows: ";
    cin >> rows;

    cout << "Enter the number of columns: ";
    cin >> columns;

    float result;
    result = totalIncome(screenType, rows, columns);
    cout << result;

}

float totalIncome(string screenType, int rows, int columns){
    float income;
    income = rows * columns;

    if(screenType == "Premiere"){
        income = income * 12; 
    }
  
    if(screenType == "Discount"){
        income = income * 5;
    }
   
    if(screenType == "Normal"){
        income = income * 7.5;
    }

    return income;
} 