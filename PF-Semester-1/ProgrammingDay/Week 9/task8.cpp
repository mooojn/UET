#include <iostream>

using namespace std;

string findBrokenKeys(string correctPhrase, string actualTyped);

main()
{
    string correctPhrase;
    cout << "Enter the correct phrase: ";
    getline(cin, correctPhrase) ;

    string actualTyped;
    cout << "Enter what you actually typed: ";
    getline(cin, actualTyped) ;

    cout << "Broken keys: " << findBrokenKeys(correctPhrase, actualTyped);
 
}

string findBrokenKeys(string correctPhrase, string actualTyped) {
    string brokenKeys = "";      
    string seenKeys = "";

    /// looping through the correct phrase elements
    for (int i = 0; i < correctPhrase.length(); i++) 
    {               
        if (correctPhrase[i] != actualTyped[i] && seenKeys.find(correctPhrase[i]) == string::npos)    //// npos --> not found
        {
            brokenKeys += correctPhrase[i];   
            seenKeys += correctPhrase[i];    
        }
    }
    return brokenKeys;
}
