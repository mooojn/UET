# include <iostream>
# include <vector>
using namespace std;
string add_str(){
    string str;
    cout << "Enter string: ";
    cin >> str;
    return str;
}
string opt(){
    cout << "1. Add string" << endl;
    cout << "2. Remove string" << endl;
    string choice;
    cout << "Enter choice: ";
    cin >> choice;
    return choice;
}
int main ()
{
    vector<string> vec;
    while(true){
        string choice = opt();
        if(choice == "1"){
            vec.push_back(add_str());
            cout << "Capacity: " << vec.capacity() << endl;
            cout << "Size: " << vec.size() << endl;
        }else if(choice == "2"){
            vec.pop_back();
            cout << "Capacity: " << vec.capacity() << endl;
            cout << "Size: " << vec.size() << endl;
        }else{
            cout << "Invalid choice" << endl;
        }
    }
    return 0;
}
