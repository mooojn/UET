#include <iostream>

using namespace std;

main()
{
	cout << "Enter the number of hours: ";
	int hours;
	cin >> hours;

	float seconds = hours*60*60;
	cout << hours << " hours is equivalent to " << seconds << " seconds.";	
}
