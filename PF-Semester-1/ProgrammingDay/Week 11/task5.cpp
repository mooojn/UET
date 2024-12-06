#include<iostream>
using namespace std;
string toLowerCase(string);
string toMorse(string,string,string[]);
int searchString(string s, char c);
int main(){
    string alphabets = "abcdefghijklmnopqrstuvwxyz ";
    string morseCode[27] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--..","-.-.-.-"};
    string s;
    cout<<"Enter a string: ";
    getline(cin,s);
    s = toLowerCase(s);
    cout<<toMorse(s,alphabets,morseCode);
}
string toLowerCase(string s){
    for(int i=0;s[i]!='\0';i++){
        if(s[i]>=65 && s[i]<=90){
            s[i]+=32;
        }
    }
    return s;
}
string toMorse(string s,string alphabets,string morseCodes[]){
    string result = "";
    for(int i=0;s[i]!='\0';i++){
        int index = searchString(alphabets,s[i]);
        if(index!=-1){
            result+=morseCodes[index];
        }
    }
    return result;
}

int searchString(string s, char c){
    for(int i=0;s[i]!='\0';i++){
        if(s[i]==c){
            return i;
        }
    }
    return -1;
}