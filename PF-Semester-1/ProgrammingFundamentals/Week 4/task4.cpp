#include<iostream>

using namespace std;

void add(int a, int b);
void sub(int a, int b);
void mul(int a, int b);
void divd(int a, int b);

main()
{
	cout << "Enter 1st number: ";
	int n1;
	cin >> n1;
	
	cout << "Enter 2nd number: ";
	int n2;
	cin >> n2;
	
	cout << "Enter an operator (+, -, *, /): ";
	char op;
	cin >> op;
	
	if (op == '+')
	{
		add(n1,n2);
	}
	if (op == '-')
	{
		sub(n1,n2);
	}
	if (op == '*')
	{
		mul(n1,n2);
	}
	if (op == '/')
	{
		divd(n1,n2);
	}
}

void add(int a, int b)
{
	int res;
	res = a + b;
	cout << "Addition: " << res;
}

void sub(int a, int b)
{
	int res;
	res = a - b;
	cout << "Subtraction: " << res;
}

void mul(int a, int b)
{
	int res;
	res = a * b;
	cout << "Multiplication: " << res;
}

void divd(int a, int b)
{
	int res;
	res = a / b;
	cout << "Division: " << res;
}
