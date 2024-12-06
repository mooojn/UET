#include <iostream>

using namespace std;

int calculateVolleyballGames(string, int, int);

main()
{
    string yearType;
    int holidays, weekends;

    cout << "Enter year type: ";
    cin >> yearType;

    cout << "Enter number of holidays: ";
    cin >> holidays;

    cout << "Enter number of weekends: ";
    cin >> weekends;

    int result;
    result = calculateVolleyballGames(yearType, holidays, weekends);
    cout << result;
}

int calculateVolleyballGames(string yearType, int holidays, int weekends)
{
    int whole;
    int totalVolleyBallGameTime;
    int gameDays = 48;          // given
    
    holidays = holidays * 0.67;     // 2/3 = 0.67
    weekends = weekends * 0.75;     // 3/4 = 0.75
    whole = holidays + weekends;
    totalVolleyBallGameTime = gameDays - gameDays * 0.15;       // 15 percent of game days
    totalVolleyBallGameTime = totalVolleyBallGameTime + whole;

    if (yearType == "leap")
        totalVolleyBallGameTime = totalVolleyBallGameTime + 1;      // round off

    else
    {
        totalVolleyBallGameTime = totalVolleyBallGameTime - totalVolleyBallGameTime * 0.15; // 15 percent again
        totalVolleyBallGameTime += 1;               // round off                            // in case of normal
    }
    
    return totalVolleyBallGameTime;
}
