#include <iostream>

using namespace std;

void tpChecker(int peoples, int rolls);

main()
{
 int people, rolls;
 
 cout << "Number of people in the household: ";
 cin >> people;
 
 cout << "Number of rolls of TP: ";
 cin >> rolls;

 tpChecker(people, rolls);
}

void tpChecker(int peoples, int rolls)
{
  int totalRolls, rollsUsed, days;
  totalRolls = rolls * 500;
  rollsUsed = peoples * 57;
  days = totalRolls / rollsUsed;

  if (days < 15)
    cout << "Your TP will only last " << days << " days, buy more!";
  
  if (days >= 15)
    cout << "Your TP will last " << days << " days, no need to panic!";
}
 