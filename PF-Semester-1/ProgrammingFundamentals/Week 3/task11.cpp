#include<iostream>

using namespace std;

main()
{
	cout << "Enter the current world population: ";
	int population;
	cin >> population;

	cout << "Enter the monthly birth rate (number of births per month): ";
	int birth_rate;
	cin >> birth_rate;
	
	int total_population = birth_rate*12*30 + population;
	cout << "The population in three decades will be: " << total_population;
}
