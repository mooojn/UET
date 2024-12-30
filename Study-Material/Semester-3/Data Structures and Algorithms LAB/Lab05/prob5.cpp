#include <iostream>
#include <vector>
using namespace std;
class Matrix {
public:
    void display() {
        cout << "Matrix:" << endl;
        for (const auto& row : data) {
            for (int element : row)
                cout << element << " ";
            cout << endl;
        }
        cout << endl;
    }
    void addRow(const vector<int>& row) {
        data.push_back(row);
    }
    void addColumn(const vector<int>& column) {
        if (data.empty()) {
            cerr << "Error: Cannot add a column to an empty matrix." << endl;
            return;
        }
        if (column.size() != data.size()) {
            cerr << "Error: Column size must match the number of rows." << endl;
            return;
        }
        for (size_t i = 0; i < data.size(); ++i) 
            data[i].push_back(column[i]);
    }
    void transpose() {
        if (data.empty()) return;
        vector<vector<int>> transposed(data[0].size(), vector<int>(data.size()));
        for (size_t i = 0; i < data.size(); ++i) {
            for (size_t j = 0; j < data[0].size(); ++j) 
                transposed[j][i] = data[i][j];
        }
        data = transposed;
    }
private:
    vector<vector<int>> data;
};

int main() {
    Matrix matrix;

    matrix.addRow({1, 2, 3});
    matrix.addRow({4, 5, 6});
    matrix.addRow({7, 8, 9});

    cout << "Original matrix:" << endl;
    matrix.display();

    matrix.addColumn({10, 11, 12});
    cout << "After adding a column:" << endl;
    matrix.display();

    matrix.transpose();
    cout << "After transposing the matrix:" << endl;
    matrix.display();

    return 0;
}
