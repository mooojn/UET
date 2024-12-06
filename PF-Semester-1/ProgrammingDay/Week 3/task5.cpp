#include<iostream>

using namespace std;

main()
{
	string name;
	cout << "Enter the Name of the Person: ";
	cin >> name;
	
	float kg;
	cout << "Enter the target weight loss in kilograms: ";
	cin >> kg;
	
	float days;
	days = kg * 15;	
	cout << name << " will need " << days << " days to lose " << kg << " kg of weight by following the doctor's suggestions";
}