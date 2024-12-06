#include <iostream>
#include <fstream>
using namespace std;
void getBirthdayCake(string, int);
string readField(string, int);
main()
{
    fstream f;
    string filename = "names.txt";
    string s;
    f.open(filename, ios::in);
    getline(f, s);
    string name = readField(s, 1);
    int age = stoi(readField(s, 2));
    cout<<name<<" "<<age<<endl;
    getBirthdayCake(name, age);
    f.close();
}

void getBirthdayCake(string name,int age){
    char symbol;
    if (age %2==0){
        symbol = '#';
    }
    else{
        symbol = '*';
    }
    for(int i = 0;i<15;i++){
        cout<<symbol;
    }
    cout<<endl;
    cout<<symbol<<" "<<age<<" HB "<<name<<"! "<<age<<" "<<symbol<<endl;
    for(int i = 0;i<15;i++){
        cout<<symbol;
    }
}

string readField(string line,int field){
    int count = 0;
    string result = "";
    for (int i =0;line[i]!='\0';i++){
        if(line[i]!=','){
            result+= line[i];
        }
        else{
            count++;
            if (count == field){
                return result;
            }
            result = "";
        }
    }
}