#include<iostream>
using namespace std;
main()
{
    int size;
    cout << "Enter row size: ";
    cin >> size;
    cout << "Enter the elements of the matrix: " << endl;
    int arr[size][5];
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << "Enter element at position [" << i << "][" << j << "]: "; 
            cin >> arr[i][j];
        }
    }
    cout << endl;
    cout << "Original Matrix:" << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < 5; j++)
            cout << arr[i][j] << "\t";
        cout << endl;
    }
    int max =0;
    int Maxindex = 0;
    for (int j = 0;j < 5; j++)  /// finding max element in the first coloumn
    {
        if (arr[0][j] > max)
        {
            max = arr[0][j];
            Maxindex = j;
        }
    }
    int j = 0;  /// swapping values
    for (int i = 0; i < 3; i++)
    {
        int temp = arr[i][j];
        arr[i][j] = arr[i][Maxindex];
        arr[i][Maxindex] = temp;
    }
    cout << endl;     //// formatting output
    cout << "Matrix after largest column moved to first:" << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < 5; j++)
            cout << arr[i][j] << "\t";
        cout << endl;
    }      
}