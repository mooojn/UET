#include <iostream>

using namespace std;

void evenOrOdd(int num);

main()
{
	cout << "Enter a number: ";
	int n;
	cin >> n;
	evenOrOdd(n);
}

void evenOrOdd(int num)
{	
	if (num%2 == 0)
		cout << "Number " << num << " is even";
	else
		cout << "Number " << num << " is odd";
}
