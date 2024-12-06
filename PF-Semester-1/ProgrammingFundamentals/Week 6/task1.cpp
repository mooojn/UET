#include<iostream>

using namespace std;

bool greaterNumber(int, int);

main(){
    int number1,number2;

    cout << "Enter the first number: ";
    cin >> number1;
    
    cout << "Enter the second number: ";
    cin >> number2;
    
    int result;
    result = greaterNumber(number1, number2);
    cout << result;

}

bool greaterNumber(int num1, int num2){
    if (num1 > num2){
        return true;
    }
    return false;
}