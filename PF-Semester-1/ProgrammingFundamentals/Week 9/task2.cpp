#include<iostream>

using namespace std;

main()
{
    string word, revWord = "";
    
    cout << "Enter a String: ";
    cin >> word;
    
    int count = 0;
    for (int i = 0; word[i] != '\0'; i++)
    {
        count++;
    }

    for (int i = count; i != -1 ; i--)
    {
        revWord += word[i];
    }       

    cout << "Reversed String: " << revWord;
}
