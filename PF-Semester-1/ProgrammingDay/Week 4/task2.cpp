#include<iostream>

using namespace std;

void Reverse(string value);

main()
{
  string value;
  cout << "Enter 'true' or 'false': ";
  cin >> value; 

  Reverse(value);
}

void Reverse(string value)
{
  if (value=="true")
    cout << "false";

  if (value=="false")
    cout << "true";
}
