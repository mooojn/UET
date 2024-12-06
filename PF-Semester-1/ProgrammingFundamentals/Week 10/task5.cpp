#include<iostream>
using namespace std;
main()
{
    int rows;
    cout << "Enter the number of rows for the array: ";
    cin >> rows;
    int arr[rows][3];
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter element at position [" << i << "][" << j << "]: ";   
            cin >> arr[i][j];
        }
    }
    bool identical;
    int currentRow[3];
    int identicalCount = 0;
    for (int i = 0; i < rows; i++)
    {
        int same =0;
        for (int j = 0; j < 3; j++)
        {
            currentRow[j] = arr[0][j];
        }
        for (int k = 0; k < 3; k++)
        {
            if (currentRow[k] == arr[i][k]){
                identical = true;
                same ++;
            }
            else
                identical = false;
        }
        if (identical && same == 3)
            identicalCount++;
    }
    if (identicalCount != 1)
        cout << "The count of identical rows in the array is: " << identicalCount;
    else
        cout << "The count of identical rows in the array is: " << 0;
}