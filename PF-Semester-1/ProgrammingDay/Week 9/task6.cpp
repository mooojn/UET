#include <iostream>

using namespace std;

int coloringTime(string arr[], int size);

main()
{
    int size;
    cout << "Enter the size of Array: ";
    cin >> size;

    string arr[size]; 

    string element;   // array values
    for (int i = 0; i < size; i++)
    {
        cout << "Enter Element " << i + 1 << ": ";
        cin >> element;
        arr[i] = element;
    }
    cout << "Time to color: " << coloringTime(arr, size) << " seconds";

}

int coloringTime(string arr[], int size) 
{
    int switchTime = 1;
    int colorTime = 2;
    int totalTime = 0;
    
    totalTime += colorTime; /// time to color the first square

    /// starting from 2nd value
    for (int i = 1; i < size; i++) 
    {
        if (arr[i] != arr[i - 1])
            totalTime += switchTime; /// time to switch pencils
    
        totalTime += colorTime; /// time to color a square
    }
    return totalTime;
}
