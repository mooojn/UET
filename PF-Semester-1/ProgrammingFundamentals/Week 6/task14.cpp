#include<iostream>

using namespace std;

string calculateCost(float budget, string category, int numPeople);



main(){
    float budget;
    string category;
    int numPeople;

    cout << "Enter the budget: ";
    cin >> budget;
    
    cout << "Enter the category (VIP/Normal): ";
    cin >> category;
    
    cout << "Enter the number of people in the group: ";
    cin >> numPeople;
    
    string result;

    result = calculateCost(budget, category, numPeople);
    cout << result;

}

string calculateCost(float budget, string category, int numPeople){
    

    if (numPeople >= 1 && numPeople <= 4){
        budget = budget - budget * 0.75;

    }

    if (numPeople >= 5 && numPeople <= 9){
        budget = budget - budget * 0.6;

    }

    if (numPeople >= 10 && numPeople <= 24){
        budget = budget - budget * 0.50;

    }

    if (numPeople >= 25 && numPeople <= 49){
        budget = budget - budget * 0.40;

    }

    if (numPeople >= 50){
        budget = budget - budget * 0.25;

    }
    
    if (category == "VIP"){
        budget = budget - numPeople * 499.99;
    }
    else{
        budget = numPeople * 249.99 - budget;
    }

    if(budget > 0){
       return "Yes! You have " + to_string(budget) + " leva left.";
    }
    else{
        // float money = -budget;
        return "Not enough money! "+ to_string(budget)+" You need  leva."; 
    }


}