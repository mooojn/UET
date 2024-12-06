#include <iostream>
#include<conio.h>

using namespace std;

float taxCalculator(string, float);

main()
{
    float vehiclePrice;
    string vehicleType;

    cout << "Enter the vehicle type code (M, E, S, V, T): ";
    cin >> vehicleType;

    cout << "Enter the vehiclePrice of the vehicle: $";
    cin >> vehiclePrice;
    
    float result;
    result = taxCalculator(vehicleType, vehiclePrice);
    
    cout << "The final price of a vehicle of Type " << vehicleType << " after adding the tax is: $" << result << ".";
}

float taxCalculator(string vehicleType, float vehiclePrice)
{ 
    float taxRate;

    if (vehicleType == "M")
        taxRate = 0.06;

    if (vehicleType == "E")
        taxRate = 0.08;

    if (vehicleType == "S")
       taxRate = 0.1;
    
    if (vehicleType == "V")
        taxRate = 0.12;
    
    if (vehicleType == "T")
        taxRate = 0.15;

    taxRate = vehiclePrice * taxRate;
    vehiclePrice = vehiclePrice + taxRate;
    
    return float(vehiclePrice);
}
