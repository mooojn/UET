#include<iostream>
using namespace std;
main()
{
    cout << "Enter the elements of the matrix:" << endl;
    int arr[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter element at position [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }
    cout << "The matrix you entered is:" << endl;
    int diagnolCount = 0;
    int nonDiagnolZeroCount = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i==j && arr[i][j] == 1)
                diagnolCount++;
            else if(i != j && arr[i][j] == 0)
                nonDiagnolZeroCount++;
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
    if (diagnolCount == 3 && nonDiagnolZeroCount == 6)
        cout << "The entered matrix is an identity matrix.";
    else
        cout << "The entered matrix is NOT an identity matrix.";
}