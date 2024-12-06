#include<iostream>

using namespace std;

main()
{
	cout << "Enter weight in pounds: ";
	int pound;
	cin >> pound;
	
	float kilogram;
	kilogram = pound * 0.45;
	cout << pound << " pounds is equal to " << kilogram << " kilograms." ; 
}
