#include<iostream>

using namespace std;

void amplify(int);

main()
{
    int number;
    
    cout << "Enter the number to Amplify: ";
    cin >> number;
    
    amplify(number);
}

void amplify(int num)
{
    int n;
    for (int i = 1; i<=num; i++)
    {   
        if (i == num)
        {
            if (i%4 ==0)
            {
                n = i; 
                n = n * 10;
                cout << n;
            }
            else
                cout << i;
        }       
        else if (i % 4 == 0)
        {
           n = i; 
           n = n * 10;
           cout << n << ", "  ;
        }
        else 
            cout << i<< ", " ;
    }
}
