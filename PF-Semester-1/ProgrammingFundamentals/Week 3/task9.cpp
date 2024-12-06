#include <iostream>

using namespace std;

main()
{
	cout << "Enter your age in years: ";
	int age_in_years;
	cin >> age_in_years;

	int age_in_days = age_in_years * 365;
	cout << "Your age in days is approximately " << age_in_days << " days.";
}
