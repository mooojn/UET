#include<iostream>

using namespace std;

float lowestPrice(int, string);

main(){
    int kilometers;
    string periodOfDay;

    cout << "Enter the number of kilometers: ";
    cin >> kilometers;
    
    cout << "Enter the period of the day (day/night): ";
    cin >> periodOfDay;
   
    float result;
    result = lowestPrice(kilometers, periodOfDay);
    cout << "Lowest price for " << kilometers << " kilometers: "<< result << " EUR";

}

float lowestPrice(int kilometers, string periodOfDay){
    float price;
    if(kilometers >= 20){
        price = kilometers * 0.09;

    }

  
    if(kilometers < 20 && periodOfDay == "day"){
        price = kilometers * 0.79;
        price = price + 0.70;

    }
    
    if(kilometers < 20 && periodOfDay == "night"){
        price = kilometers * 0.90;
        price = price + 0.70;

    }
    
    if(kilometers >= 100){
        price = kilometers * 0.06;
    }
    
    return price;
   

    

}