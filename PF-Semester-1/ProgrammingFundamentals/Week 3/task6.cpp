#include <iostream>

using namespace std;

main()
{
	cout << "Enter the size in megabytes (MB): ";
	float mb;
	cin >> mb;
	
	float bits= 1024 * 1024 * 8 *mb;
	cout << mb << " MB" << " is equivalent to " << bits << " bits.";
}
