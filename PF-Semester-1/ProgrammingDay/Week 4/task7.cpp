#include <iostream>

using namespace std;

void flowerShop(int redRose, int whiteRose, int tulip);

main()
{
 int redRose, whiteRose, tulip;

 cout << "Red Rose: ";
 cin >> redRose;

 cout << "White Rose: ";
 cin >> whiteRose;

 cout << "Tulips: ";
 cin >> tulip;

 flowerShop(redRose, whiteRose, tulip);
}

void flowerShop(int redRose, int whiteRose, int tulip)
{
  float price, discount, final_price;
  discount = 0; 
  price = (redRose * 2) + (whiteRose * 4.10) + (tulip * 2.50);

  cout << "Original Price: $" << price << endl;

  if (price > 200)
  {
    discount = price * 0.2;
    final_price = price - discount;
    cout << "Price after Discount: $" << final_price;
  }

  if (discount == 0)
    cout << "No discount applied.";
}
