#include<iostream>

using namespace std;

float cellularBill(char, string, int);
string service(char);

main()
{
    char serviceCode;
    string serviceTime;
    int timeUsed;

    cout << "Enter the service code (R/r for regular, P/p for premium): ";
    cin >> serviceCode;
    
    string serviceType;
    serviceType = service(serviceCode);
    
    if (serviceType == "Premium")
    {
        cout << "Enter time of the call (D/d for day, N/n for night): ";
        cin >> serviceTime;
    }

    cout << "Enter the number of minutes used: ";
    cin >> timeUsed;
    
    float cost;
    cost = cellularBill(serviceCode, serviceTime, timeUsed);

    cout << "Service Type: " << serviceType << endl;
    cout << "Total Minutes Used: "<< timeUsed << " minutes" << endl;
    cout << "Amount Due: $" << cost;
}

string service(char serviceCode)
{
    string serviceTime;
    
    if (serviceCode == 'R' || serviceCode == 'r')
        return "Regular";
    
    else if (serviceCode == 'P' || serviceCode == 'p')
        return "Premium";
    
}

float cellularBill(char serviceCode, string serviceTime, int timeUsed)
{
    float cost;
    
    if (serviceTime == "D" || serviceTime == "d")
    {
        cost = 25;
        if (timeUsed > 75)
        {
            timeUsed = timeUsed - 75;
            cost = cost + timeUsed * 0.10;
        }
    }

    else if (serviceTime == "N" || serviceTime == "n")
    {
        cost = 25;
        if (timeUsed > 100)
        {
            timeUsed = timeUsed - 100;
            cost = cost + timeUsed * 0.05;
        }

    }
    
    else
    {
        cost = 10.0;
        if (timeUsed > 50)
        {
            timeUsed = timeUsed - 50;
            cost = cost + timeUsed * 0.20;
        }
    }
    return cost;
}
