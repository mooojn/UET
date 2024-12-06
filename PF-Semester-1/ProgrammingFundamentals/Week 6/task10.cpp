#include<iostream>

using namespace std;

bool areSameNumber(int, int, int);

main()
{
    int number1, number2, number3;

    cout << "Enter the first number: ";
    cin >> number1;
    
    cout << "Enter the second number: ";
    cin >> number2;
    
    cout << "Enter the third number: ";
    cin >> number3;
    

    int result;
    result = areSameNumber(number1, number2, number3);
    cout << result;

}

bool areSameNumber(int number1, int number2, int number3)
{
    if (number1 == number2 && number1 == number3)
        return true;
    return false;

}
    
 