#include <iostream>

using namespace std;

int projectTimeCalculation(int, int, int);

main()
{  
    int hoursNeeded, days, workers;

    cout << "Enter the needed hours: ";
    cin >> hoursNeeded;

    cout << "Enter the days that the firm has: ";
    cin >> days;

    cout << "Enter the number of all workers: "; 
    cin >> workers;

    int result;
    result = projectTimeCalculation(hoursNeeded, days, workers);

    if (hoursNeeded > result)
        cout << "Not enough time! " << result << " hours needed.";

    else
        cout << "Yes!" << result << " hours left.";
}

int projectTimeCalculation(int hoursNeeded, int days, int workers)
{
    int workingTime, trainingTime;
    int hoursLeft;

    workingTime = workers * 10 * days;
    trainingTime = workingTime * 0.1;

    if ((workingTime + trainingTime) <= hoursNeeded)
        hoursLeft = hoursNeeded - workingTime + trainingTime;

    else
        hoursLeft = workingTime - (hoursNeeded + trainingTime);

    return hoursLeft;
}    
