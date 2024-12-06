#include <iostream>

using namespace std;

bool isPrime(int);
int Primorial(int);

main()
{
    int n;

    cout << "Enter Number: ";
    cin >> n;

    cout << Primorial(n);
}

bool isPrime(int num)
{
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

int Primorial(int n)
{
    int product = 1, i = 2;
    while (n != 0)
    {
        if (isPrime(i))
        {
            product *= i;
            n--;
        }
        i++;
    }
    return product;
}
