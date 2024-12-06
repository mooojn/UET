#include <iostream>

using namespace std;

main()
{
	cout << "Enter the name of the cricket team: " ;
	string team;
	cin >> team;

	cout << "Enter the number of wins: " ;
	int win;
	cin >> win;
	
	cout << "Enter the number of draws: " ;
	int draw;
	cin >> draw;
	
	cout << "Enter the number of losses: " ;
	int lose;
	cin >> lose;

	int points = win*3 + lose*0 + draw*1;
	cout << team << " has obtained " << points << " points in the Asia Cup tournament.";
}
