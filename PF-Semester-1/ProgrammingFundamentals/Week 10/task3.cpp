#include<iostream>
using namespace std;
main()
{
    char arr[5][5] = {
        {'.','.','.','*','*'},
        {'.','*','.','.','.'},
        {'.','*','.','.','.'},
        {'.','*','.','.','.'},
        {'.','.','*','*','.'},
    };
    cout << "Enter coordinates to fire torpedo (e.g., A1, B3, E5): ";
    string coord;
    cin >> coord; 
    int character = coord[0] - 65;
    int num = coord[1];
    num = num - 49;
    string result;
    if (arr[character][(num)] == '.')
        result = "splash";
    else if (arr[character][num] == '*')
        result = "BOOM";
    cout << "Result: " << result;
}
