#include <iostream>
#include <fstream>
using namespace std;
int searchString(string s, char c);
int main()
{
    fstream f;
    string filename = "alphabets.txt";
    string s;
    f.open(filename, ios::in);
    getline(f, s);
    f.close();
    string result = "";
    for (int i = 97; i < 123; i++)
    {
        if (searchString(s, i) == -1)
        {
            result += (char)i;
        }
    }
    f.open(filename, ios::app);
    f << endl<<result << endl;
    f.close();
}
int searchString(string s, char c)
{
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == c)
        {
            return i;
        }
    }
    return -1;
}