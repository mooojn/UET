#include<iostream>

using namespace std;

main()
{
    int days;
    cout << "Enter the number of Saturdays: ";
    cin >> days;

    int miles[days];
    for (int i = 0; i < days; i++)
    {
        cout << "Enter miles run for Saturday " << i + 1 << ": ";
        cin >> miles[i];
    }
    
    int progress = 0;
    for (int i = 0; i < days - 1; i = i + 1)
    {
        if (miles[i+1] > miles[i])
            progress += 1;
    }
    cout << "Total progress days: " << progress;

}
