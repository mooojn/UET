#include<iostream>

using namespace std;

main()
{
	float vi;
	cout << "Enter Initial Velocity (m/s): ";
	cin >> vi;

	float a;
	cout << "Enter Acceleration (m/s^2): ";
	cin >> a;

	float t;
	cout << "Enter Time (s): ";
	cin >> t;
	
	float final_v;
	final_v = a * t + vi ;	
	cout << "Final Velocity (m/s): " << final_v;
}