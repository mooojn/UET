#include <iostream>

using namespace std;

void passOrFail(int marks);

main()
{
	cout << "Enter your score: ";
	int score;
	cin >> score;
	passOrFail(score);
}

void passOrFail(int marks)
{
	if (marks > 50)
		cout << "Pass";
	else
		cout << "Fail";
}
