#include<iostream>

using namespace std;

main()
{
    string output;
    string word;

    cout<<"Enter a string: ";
    getline(cin,word);

    for(int i = 0; word[i] != '\0'; i++)
    {          
        if (word[i] != 'a' && word[i] != 'e' && word[i] != 'i' && word[i] != 'o' && word[i] != 'u' &&word[i] != 'A' && word[i] != 'E' && word[i] != 'I' && word[i] != 'O' && word[i] != 'U')
        {
            output+=word[i];
        }
    }
    cout <<"String with vowels removed: "<<output;

}
