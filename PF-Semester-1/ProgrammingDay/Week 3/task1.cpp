#include<iostream>

using namespace std;

main()
{
	int n;
	cout << "Enter the number of sides of the polygon: ";
	cin >> n;
	
	int angles;
	angles = (n-2) * 180;
	cout << "The sum of internal angles of a " << n << "-sided polygon is: " << angles << " degrees";
}