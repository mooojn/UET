#include<iostream>

using namespace std;

bool areAllElementsIdentical(string arr[], int size);

main()
{
    int size;

    cout << "Enter the size of Array: ";
    cin >> size;

    string arr[size];     // array

    string element;   // array values
    for (int i = 0; i < size; i++)
    {
        cout << "Enter Element " << i + 1 << ": ";
        cin >> element;
        arr[i] = element;
    }

    bool result;
    result = areAllElementsIdentical(arr, size);
    cout << result;

}

bool areAllElementsIdentical(string arr[], int size)
{
    /// looping through whole array's elements
    for (int i = 0; i < size; i++)
    {
        if (arr[0] != arr[i])         /// checking if current index value is similar to first value
            return false;
    }
    return true;
}
