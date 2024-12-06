#include<iostream>

using namespace std;

void convertPINToDance(string pin);

main()
{
    string pin;
    cout << "Enter your PIN (4 digits): ";
    cin >> pin;

    convertPINToDance(pin);
    
}

void convertPINToDance(string pin)
{
    string moves[10] = {"Shimmy", "Shake", "Pirouette", "Slide", "Box Step", "Headspin", "Dosado", "Pop", "Lock", "Arabesque"};
    string result = "";

    ///// error cases
    if (pin.length() != 4)          
    {
        cout << "Invalid input.";
        return;
    }
    for (int i = 0; i < pin.length(); i++)         /// one of the digit is alphabet
    {
        if (!isdigit(pin[i]))
        {
            cout << "Invalid input.";
            return;
        }
    }
    /// 0000
    int pinIndex = 0, movesIndex = 0;
    int j = 0;        /// for reset of values
    for (int i = 0; i < pin.length(); i++)
    {
        pinIndex += (pin[i] - '0');          //// char to int conversion   :}

        /// special case when value is higher than arrays lenght    ;}
        if (pinIndex > 9)                  
            pinIndex = pinIndex - 10;

        // cout << pinIndex << endl;       /// debugging reasons  ;{

        result += moves[pinIndex] + ", ";

        pinIndex = j;       /// resetting index 
        pinIndex++;
        j++;
    }
    result = result.substr(0, result.size() - 2);            /// removes the "space" and "," from last  :`]
    cout << result;
}
