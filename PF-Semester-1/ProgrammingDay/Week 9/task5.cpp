#include <iostream>

using namespace std;

int countCommonCharacters(string s1, string s2);

main() 
{
    string word1, word2;
    
    cout << "Enter the first string: ";
    cin >> word1;

    cout << "Enter the second string: ";
    cin >> word2;

    cout << "Number of common characters: " << countCommonCharacters(word1, word2);
}
int countCommonCharacters(string s1, string s2) {
    int commonCount = 0;
    int charCount[26] = {0};    //// characters count

    //// counting characters from first string
    for (int i = 0; i < s1.length(); i++) 
    {
        char ch = s1[i];
        charCount[ch - 'a']++;        /// counting the instances of the character  ;-}          
    }

    //// counting characters from second string
    for (int i = 0; i < s2.length(); i++)
    {
        char ch = s2[i];
        if (charCount[ch - 'a'] > 0) 
        {
            commonCount++;   
            charCount[ch - 'a']--;
        }
    }
    return commonCount;
}
