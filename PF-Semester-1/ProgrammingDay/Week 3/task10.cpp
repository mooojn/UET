#include <iostream>

using namespace std;

main()
{	
	int n1;
	cout << "Number 1: ";
	cin >> n1;

	int n2;
	cout << "Number 2: ";
	cin >> n2;

	int n3;
	cout << "Number 3: ";
	cin >> n3;
	
	int n4;
	cout << "Number 4: ";
	cin >> n4;
	
	int n5;
	cout << "Number 5: ";
	cin >> n5;
	
	int sum_5 = n1 + n2 + n3 + n4 + n5;
	
	int n6;
	cout << "Number 6: ";
	cin >> n6;

	int n7;
	cout << "Number 7: ";
	cin >> n7;
	
	int n8;
	cout << "Number 8: ";
	cin >> n8;

	int n9;
	cout << "Number 9: ";
	cin >> n9;

	int n10;
	cout << "Number 10: ";
	cin >> n10;

	int multiply_5 = n6 * n7 * n8 * n9 * n10;

	int n11;
	cout << "Number 11: ";
	cin >> n11;
	
	int n12;
	cout << "Number 12: ";
	cin >> n12;

	int n13;	
	cout << "Number 13: ";
	cin >> n13;

	int n14;
	cout << "Number 14: ";
	cin >> n14;

	int n15;
	cout << "Number 15: ";
	cin >> n15;
	
	int subtract_5 = n11 - n12 - n13 - n14 - n15;

	int result = (sum_5 + multiply_5) - subtract_5;

	cout << "The final result is: " << result;
}