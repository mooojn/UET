#include <iostream>

using namespace std;

string pyramidVolume(double, double, double, string);

main()
{
    double length, width, height;
    string unit;

    cout << "Enter the length of the pyramid (in meters): ";
    cin >> length;

    cout << "Enter the width of the pyramid (in meters): ";
    cin >> width;

    cout << "Enter the height of the pyramid (in meters): ";
    cin >> height;

    cout << "Enter the desired output unit (millimeters, centimeters, meters, kilometers): ";
    cin >> unit;

    string result;
    result = pyramidVolume(length, width, height, unit);
    cout << result;
}

string pyramidVolume(double length, double width, double height, string unit)
{
    double volume;
    volume = length * width * height / 3;

    if (unit == "meters")
        return "The volume of the pyramid is: " + to_string(volume) + " cubic meters"; 

    if (unit == "centimeters")
    {
        volume = volume * 10000000;
        return "The volume of the pyramid is: " + to_string(volume) + " cubic centimeters"; 
    }

    if (unit == "kilometers")
    {
        volume = volume / 1000000000;
        return "The volume of the pyramid is: " + to_string(volume) + " cubic kilometers"; 
    }

    if (unit == "millimeters")
    { 
       volume = volume * 1000000000;
        return "The volume of the pyramid is: " + to_string(volume) + " cubic millimeters"; 
    }
}