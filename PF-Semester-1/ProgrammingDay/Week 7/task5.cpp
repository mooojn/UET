#include<iostream>

using namespace std;

bool isPrime(int);

main()
{
    int number;
    
    cout << "Enter Number: ";
    cin >> number;
    
    cout << isPrime(number);
}

bool isPrime(int num)
{
    bool prime = true;
    
    if (num == 0 || num == 1)
        prime = false;
    else
    {
        for (int i=2;i<num;i++)
        {
            if (num%i == 0)
                prime = false; 
        }

    }
    return prime;
}
