#include <iostream>

using namespace std;

void longestTime(int hour, int minutes);

main()
{
 int hours, minutes;

 cout << "Enter the number of hours: ";
 cin >> hours;

 cout << "Enter the number of minutes: ";
 cin >> minutes;

 longestTime(hours, minutes);
}

void longestTime(int hour, int minutes)
{
  int hoursConvertedToMinutes;
  hoursConvertedToMinutes = hour * 60;

  if (hoursConvertedToMinutes >= minutes)
    cout << hour;

  if (hoursConvertedToMinutes < minutes)
    cout << minutes;
}
