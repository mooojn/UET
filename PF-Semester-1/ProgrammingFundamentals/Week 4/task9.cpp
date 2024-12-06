#include <iostream>

using namespace std;

void calculateFuel(float d);

main()
{
	cout << "Enter the distance: ";
	float distance;
	cin >> distance;
	
	calculateFuel(distance);
}

void calculateFuel(float d)
{
	if (d <= 10)
		cout << "Fuel needed: 100";
	else
		cout << "Fuel needed: " << d*10; 
}