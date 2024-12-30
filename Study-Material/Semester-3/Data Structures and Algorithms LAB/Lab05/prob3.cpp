#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> vec = {10, 20, 30, 40, 50}; 
    int target;
    cout << "Enter the integer to search for: ";
    cin >> target;    
    bool found = false;
    for(int i = 0; i < vec.size(); ++i){
        if (vec[i]==target){
            cout << "Integer " << target << " found at index " << i << endl;   
            found = true;
        }
    }
    if (!found){
        cout << "Integer " << target << " not found" << endl;
    }
    return 0;
}
