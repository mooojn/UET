#include <iostream>
#include <string>

using namespace std;

string checkPointPosition(int height, int xCord, int yCord);

main() 
{
    int height, xCord, yCord;
    cout << "Enter height: ";
    cin >> height;
    cout << "Enter x coordinate: ";
    cin >> xCord;
    cout << "Enter y coordinate: ";
    cin >> yCord;
    string result = checkPointPosition(height, xCord, yCord);
    cout << result;
}

string checkPointPosition(int height, int xCord, int yCord) 
{
    if (xCord >= 0 && xCord <= 3 * height) 
    {
        if (yCord == 0 || yCord == height) 
            return "Border"; // Top or bottom border
    }

    if (yCord >= 0 && yCord <= 4 * height) 
    {
        if (xCord == 0 || xCord == 2 * height) 
            return "Border"; // Left or right border
    }

    if (xCord == height && yCord >= height && yCord <= 3 * height)
        return "Border"; // Right border

    else if (xCord > 0 && xCord < 2 * height && yCord > 0 && yCord < 4 * height) 
        return "Inside";

    else 
        return "Outside";    
}
