#include<iostream>

using namespace std;

void calculateFuel(float d);

main()
{
	cout << "Enter the distance: ";
	float dist;
	cin >> dist;
	calculateFuel(dist);
}

void calculateFuel(float d)
{
	d=d*10;
	cout << "Fuel needed: " << d;
}