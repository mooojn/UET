#include <iostream>

using namespace std;

main()
{
    int number;
    cout << "Enter the number of elements: ";
    cin >> number;
    
    cout << "Enter " << number << " numbers, one per line:"<<endl; 

    int arr[number];     /// array size
    int size = 0;      // arrays index

    int num;    
    for (int i = 0; i < number; i++) 
    {
        bool isDuplicate = false;      

        cin >> num;

        //// checking for duplicates
        for (int j = 0; j < size; j++) 
        {
            if (arr[j] == num)
            {
                cout << "Already Entered: " << num << endl;
                isDuplicate = true;
                break;
            }
        }
        if (!isDuplicate) 
        {
            arr[size] = num; 
            size++;
        }
    }

    //// output :]
    cout << "Unique numbers entered: ";
    for (int i = 0; i < size; i++) 
    {
        cout << arr[i] << " ";
    }   
}
