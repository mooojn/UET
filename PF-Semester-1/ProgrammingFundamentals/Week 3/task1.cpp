#include<iostream>

using namespace std;

main()
{
	cout << "Enter your name: ";
	string name;
	cin >> name;
	
	cout << "Enter your roll number: ";
	int roll_no;
	cin >> roll_no;

	cout << "Enter your aggregate: ";
	float aggregate;
	cin >> aggregate;

	cout << "Enter your section: ";
	char section;
	cin >> section;
	
	cout << "Student Information:" << endl;
	
	cout << "Name: " << name << endl;
	cout << "Roll Number: " << roll_no << endl;
	cout << "Aggregate: " << aggregate << endl;
	cout << "Section: " << section;
}
