#include<iostream>

using namespace std;

bool isLengthEven(string);

main()
{
    string word;

    cout << "Enter a String: ";
    cin >> word;

    cout << isLengthEven(word);

}

bool isLengthEven(string word)
{
    int len;
    len = word.length();

    if (len % 2 == 0)
        return true;
    return false;
    
}
