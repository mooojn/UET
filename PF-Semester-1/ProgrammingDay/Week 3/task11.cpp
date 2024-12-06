#include <iostream>

using namespace std;

main(){
	int age;
	cout << "Enter the person's age: ";
	cin >> age;

	int moved;
	cout << "Enter the number of times they've moved: ";
	cin >> moved;
	
	int avg;
	avg =  age / (moved+1);
	cout << "Average number of years lived in the same house: " << avg; 
}