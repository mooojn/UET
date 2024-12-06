#include<iostream>

using namespace std;

void IsEqual(int num1, int num2);

main()
{
 int numberOne,numberTwo;
 
 cout << "Enter the first number: "; 
 cin >> numberOne;
 
 cout << "Enter the second number: "; 
 cin >> numberTwo;
 
 IsEqual(numberOne,numberTwo);
}

void IsEqual(int num1, int num2)
{
  if (num1==num2)
    cout << "true";
  
  if (num1!=num2)
    cout << "false";
}
