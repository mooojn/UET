#include<iostream>

using namespace std;

int triangle(int);

main()
{
    int number;
    
    cout << "Enter number of Triangle: ";
    cin >> number;
    
    int dots = triangle(number);
    cout << "Dots in the Triangle: " << dots;
}

int triangle(int num)
{
    int dots = 0;
    int prev = 0;
    for (int i = 1; i <= num; i++)
    {
        dots = i + prev;
        prev = prev + i ;
    }
    return dots;
}
