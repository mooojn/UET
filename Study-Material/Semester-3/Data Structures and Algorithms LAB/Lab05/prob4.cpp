#include <iostream>
#include <vector>
using namespace std;
void reverseVector(vector<int>& vec) {
    int n = vec.size();
    for (int i = 0; i < n / 2; ++i) {
        swap(vec[i], vec[n - i - 1]);
    }
}
void sortVector(vector<int>& vec) {
    int n = vec.size();
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (vec[j] > vec[j + 1]) {
                swap(vec[j], vec[j + 1]);
            }
        }
    }
}
void removeDuplicates(vector<int>& vec) {
    int n = vec.size();
    if (n == 0) return;   
    int j = 0;
    for (int i = 1; i < n; ++i) {
        if (vec[i] != vec[j]) {
            ++j;
            vec[j] = vec[i];
        }
    }
    vec.resize(j + 1);
}
int main() {
    vector<int> vec = {10, 20, 30, 10, 40, 30, 50, 20}; 
    cout << "Original vector: ";
    for (int v : vec) cout << v << " ";
    cout << endl;

    reverseVector(vec);
    cout << "After reversing: ";
    for (int v : vec) cout << v << " ";
    cout << endl;

    sortVector(vec);
    cout << "After sorting: ";
    for (int v : vec) cout << v << " ";
    cout << endl;

    removeDuplicates(vec);
    cout << "After removing duplicates: ";
    for (int v : vec) cout << v << " ";
    cout << endl;
    
    return 0;
}