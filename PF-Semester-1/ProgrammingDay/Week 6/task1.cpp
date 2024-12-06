#include<iostream>

using namespace std;

string decideActivity(string, string);

main()
{
    string temperature, humidity;

    cout << "Enter temperature (warm or cold): ";
    cin >> temperature;

    cout << "Enter humidity (dry or humid): ";
    cin >> humidity;

    string result;
    result = decideActivity(temperature, humidity);
    cout <<"Recommended activity: " << result;
}

string decideActivity(string temperature, string humidity)
{
    string activity;
    
    if (temperature == "warm" && humidity == "dry")
        activity = "Play tennis";

    else if (temperature == "warm" && humidity == "humid")
        activity = "Swim";

    else if (temperature == "cold" && humidity == "dry")
        activity = "Play basketball";

    else if (temperature == "cold" && humidity == "humid")
        activity = "Watch TV";
    else
        activity = "Error";
        
    return activity;
}