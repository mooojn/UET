#include<iostream>

using namespace std;

float discount(string, string, float);

main(){
    string day, month;
    float purchaseAmount;

    cout << "Enter Purchase Day: ";
    cin >> day;
    
    cout << "Enter Purchase Month: ";
    cin >> month;
    
    cout << "Enter Purchase Amount: ";
    cin >> purchaseAmount;
    
    float result;
    result = discount(day, month, purchaseAmount);
    cout << "Payable Amount after discount: " << result;

}

float discount(string day, string month, float purchaseAmount){
    float payable = purchaseAmount;    

    if (day == "Sunday" && (month == "October" || month == "March" || month == "August")){
        payable = purchaseAmount - purchaseAmount * 0.1;
    }

    return payable;

}