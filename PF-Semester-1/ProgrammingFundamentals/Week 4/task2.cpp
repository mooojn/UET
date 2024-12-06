#include<iostream>

using namespace std;

void inchesToFeet(float a);

main()
{
	cout << "Enter the measurement in inches: ";
	float inch;
	cin >> inch;
	inchesToFeet(inch);
}

void inchesToFeet(float a)
{
	float feet;
	feet=a/12;
	cout << "Equivalent in feet: " << feet;
}
