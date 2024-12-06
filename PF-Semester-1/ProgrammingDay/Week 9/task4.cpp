#include<iostream>

using namespace std;

void evenOddTransform(int arr[], int size, int n);

main()
{
    int size;
    cout << "Enter the size of Array: ";
    cin >> size;
    
    int arr[size];     // array

    int element;   // array values
    for (int i = 0; i < size; i++)
    {
        cout << "Enter Element " << i + 1 << ": ";
        cin >> element;
        arr[i] = element;
    }

    int transform;
    cout << "Enter number of times even-odd transformation need to be done: ";
    cin >> transform;

    evenOddTransform(arr, size, transform);
}

void evenOddTransform(int arr[], int size, int n)
{
    while (n != 0)
    {
        /// looping through array's element
        for (int i = 0; i < size; i++)
        {
            /// element even sub 2
            if (arr[i] % 2 == 0)
                arr[i] = arr[i] - 2;

            /// element odd add 2
            else
                arr[i] = arr[i] + 2;    
        }
        n--;
    }

    /// formatting output
    string result = "[";
    for (int i = 0; i < size; i++)
    {
        if (i == size - 1)
            result += to_string(arr[i]);
        else
            result += to_string(arr[i]) + ", ";
    }
    result += "]";

    cout << result; 
}
