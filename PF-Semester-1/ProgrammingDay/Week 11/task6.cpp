#include <iostream>
#include <fstream>
using namespace std;
string getText(string);
int main()
{
    fstream f;
    string s;
    f.open("data.txt", ios::in);
    getline(f, s);
    f.close();
    cout<<getText(s);
}

string getText(string s)
{
    bool text = false;
    string result = "";
    int count = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '"')
        {
            text = true;
        }
        if (text && count == 1)
        {
            result += s[i];
        }
    }
    if (result == "")
    {
        return "What... why did you make this?";
    }
    return result;
}