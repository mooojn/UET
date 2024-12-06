#include <iostream>

using namespace std;

void possibleBonus(int firstPosition, int secondPosition);

main()
{
 int firstPosition, secondPosition;

 cout << "Enter your position: ";
 cin >> firstPosition;

 cout << "Enter your friend's position: ";
 cin >> secondPosition;

 possibleBonus(firstPosition, secondPosition);
}

void possibleBonus(int firstPosition, int secondPosition)
{
  if (firstPosition+6 >= secondPosition)
    cout << "true";

  if (firstPosition+6 < secondPosition)
    cout << "false";
}
