#include<iostream>

using namespace std;

main()
{
	float imposter_count;
	cout << "Enter Imposter Count: ";
	cin >> imposter_count;
	
	float player_count;
	cout << "Enter Player Count: ";
	cin >> player_count;

	float chance;
	chance = 100 * (imposter_count/player_count);
	cout << "Chance of being an imposter: " << chance << "%";
}