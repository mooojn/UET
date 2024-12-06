#include<iostream>

using namespace std;

main()
{
	float v_coins;

	cout << "Enter vegetable price per kilogram (in coins): ";
	cin >> v_coins;

	float f_coins;

	cout << "Enter fruit price per kilogram (in coins): ";
	cin >> f_coins;
	
	int v_kg;

	cout << "Enter total kilograms of vegetables: ";
	cin >> v_kg;

	int f_kg;

	cout << "Enter total kilograms of fruits: ";
	cin >> f_kg;

	float total_earn;
	total_earn = ((v_coins * v_kg) + (f_coins * f_kg)) / 1.94;

	cout << "Total earnings in Rupees (Rps): " << total_earn; 
}