#include <iostream>

using namespace std;

string longest7SegmentWord(string arr[], int);
bool isEligibleWord(string);

main()
{
    int size;
    cout << "Enter the number of words: ";
    cin >> size;

    string arr[size];
    
    cout << "Enter the words, one by one:" << endl;
    
    string element;
    for (int i = 0; i < size; i++) 
    {
        cin >> element;
        arr[i] = element;
    }

    string result = longest7SegmentWord(arr, size);

    cout << "Longest 7-segment word: " << result;

}

string longest7SegmentWord(string arr[], int minLength) 
{
    string longestWord = "";

    /// looping through array elements  ;]
    for (int i = 0; i < minLength ; i++)
    {
        // arr[i]
        //// i mean this looks pretty self explanatory   ;}   
        if (isEligibleWord(arr[i]) && arr[i].length() > longestWord.length())
            longestWord = arr[i];
    }
    return longestWord;
}

/// error case
bool isEligibleWord(string word) 
{
    /// looping through whole array to check if there is an imposter  ;{
    for (int  i = 0; i < word.length(); i++)
    {
        if (word[i] == 'k' || word[i] == 'm' || word[i] == 'v' || word[i] == 'w' || word[i] == 'x')
            return false;
    }
    return true;
}
