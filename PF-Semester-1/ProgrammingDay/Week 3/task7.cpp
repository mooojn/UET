#include<iostream>

using namespace std;

main()
{
	string movie;
	cout << "Enter the movie name: ";
	cin >> movie;
	
	int a_ticket;
	cout << "Enter the adult ticket price: $";
	cin >> a_ticket;

	int c_ticket;
	cout << "Enter the child ticket price: $";
	cin >> c_ticket;

	int a_ticket_sold;
	cout << "Enter the number of adult tickets sold: ";
	cin >> a_ticket_sold;
	
	int c_ticket_sold;
	cout << "Enter the number of child tickets sold: ";
	cin >> c_ticket_sold;

	float donation;
	cout << "Enter the percentage of the amount to be donated to charity: ";
	cin >> donation;


	cout << endl;
	cout << "Movie: " << movie << endl;
	
	float sale;
	sale= (a_ticket * a_ticket_sold) + (c_ticket * c_ticket_sold);
	cout << "Total amount generated from ticket sales: $" << sale << endl;

	float dollars;
	dollars = sale * (donation/100);
	cout << "Donation to charity (" << donation << "%): $" << dollars << endl;

	float net_profit;
	net_profit = sale - dollars; 
	cout << "Remaining amount after donation: $" << net_profit;	
}