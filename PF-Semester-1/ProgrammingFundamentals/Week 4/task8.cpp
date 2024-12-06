#include <iostream>

using namespace std;

void calculatePayableAmount(string day,int price);

main()
{	
	cout << "Enter the day of purchase: ";
	string day;
	cin >> day;
	
	cout << "Enter the total purchase amount: $";
	int price;
	cin >> price;
	
	calculatePayableAmount(day,price);
}

void calculatePayableAmount(string day,int price)
{
	int payableAmount,disc;
	disc = 0;
	payableAmount = price;

	if (day == "Sunday")
	{
		disc = price * 0.1;
		payableAmount = price - disc;	
	}
	cout << "Payable Amount: $" << payableAmount;
}
