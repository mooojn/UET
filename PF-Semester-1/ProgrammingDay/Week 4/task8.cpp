#include <iostream>

using namespace std;

void  pet(int holidays);

main()
{ 
 int holidays;
 cout << "Holidays: ";
 cin >> holidays;

 pet(holidays);
}

void pet(int holidays)
{
    int workingDays, totalMinutes, difference;
    workingDays = 365 - holidays;

    totalMinutes = workingDays * 63 + holidays * 127;

    difference = 30000 - totalMinutes;

    if (difference >=0)
    {
        cout << "Tom sleeps well" << endl;
        cout << difference / 60 << " hours and " << difference % 60 << " minutes less for play";
    } 

    if (difference < 0)
    {
        cout << "Tom will run away" << endl;
        difference = -difference; 
        cout << difference / 60 << " hours and " << difference % 60 << " minutes for play";
    }  
}
