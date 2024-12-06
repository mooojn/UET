#include<iostream>

using namespace std;

void discountedPrice(string countryName, float price);

main()
{
 string countryName;
 cout << "Enter the country's name: ";
 cin >> countryName; 
 
 float price;
 cout << "Enter the ticket price in dollars: $";
 cin >> price; 

 discountedPrice(countryName, price); 
}

void discountedPrice(string countryName, float price)
{
  float discount = 0;
  float final_price;

  if (countryName == "Pakistan")
    discount = price * 0.05;

  if (countryName == "Ireland")
    discount = price * 0.1;

  if (countryName == "India")
    discount = price * 0.2;

  if (countryName == "England")
    discount = price * 0.3;
 
  if (countryName == "Canada")
    discount = price * 0.45; 

 final_price = price - discount;
 
 cout << "Final ticket price after discount: $" << final_price;
}
