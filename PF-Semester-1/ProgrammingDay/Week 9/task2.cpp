#include<iostream>

using namespace std;

string containsSeven(int  arr[], int size);

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
    
    string result;
    result = containsSeven(arr, size);
    cout << result;

}
/// 
string containsSeven(int arr[], int size)
{
    string result = "there is no 7 in the array";     /// assuming array does'nt have "7" ;]
    bool found = false;     /// optional its for enhancing performance ///

    int num = 0;      // value of current index 
    int digit = 0;  // current digit
    for (int i = 0; i < size; i++)
    {
        if (!found)    
        {
            num = arr[i];
            //// checking if current number have "7" in it
            while (num != 0)
            {
                digit = num % 10;
                if (digit == 7)
                {
                    result = "Boom!";       // found "7"
                    found = true;    
                    break;
                }
                num = num / 10;
            }
        }
    }
    return result;
}
