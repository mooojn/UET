#include <iostream>
#include <fstream>
#include <vector>
#include <array>
#include <ctime>
#include <string>

using namespace std;

// Function to create a random file with the specified size
void CreateRandomFile(const string& fn, int Size, int RN = 100) {
    srand(time(0));
    ofstream Writer(fn);
    for (int i = 0; i < Size * 1024 * 1024; i++) {
        Writer << rand() % RN << " ";
    }
}

// Function to load data from a file into a vector
vector<int> LoadVector(const string& filename) {
    ifstream file(filename);
    vector<int> data;
    int value;

    while (file >> value) {
        data.push_back(value);
    }

    return data;
}

// Function to load data from a file into an array
array<int, 2097152> LoadArray(const string& filename) {
    ifstream file(filename);
    array<int, 2097152> data;
    int value;
    size_t index = 0;

    while (file >> value && index < data.size()) {
        data[index++] = value;
    }

    return data;
}

// Function to write data to an output file
template<typename T>
void WriteToOutputFile(const string& filename, const T& data) {
    ofstream outFile(filename);
    for (const auto& value : data) {
        outFile << value << " ";
    }
}

int main() {
    const string randomFile1 = "RandomFile1.txt";
    const string randomFile2 = "RandomFile2.txt";
    
    // Create two random files of 2 MB each
    CreateRandomFile(randomFile1, 2);
    CreateRandomFile(randomFile2, 2);

    // Measure time taken to load vector from file
    clock_t start = clock();
    vector<int> vectorData = LoadVector(randomFile1);
    double timeTakenVector = double(clock() - start) / CLOCKS_PER_SEC;

    // Measure time taken to load array from file
    start = clock();
    array<int, 2097152> arrayData = LoadArray(randomFile2);
    double timeTakenArray = double(clock() - start) / CLOCKS_PER_SEC;

    // Write loaded vector data to output file
    WriteToOutputFile("OutputVector.txt", vectorData);

    // Write loaded array data to output file
    WriteToOutputFile("OutputArraylist.txt", arrayData);

    // Output the time taken for each operation
    ofstream timeOutput("OutputGA.txt");
    timeOutput << "Time taken to load vector: " << timeTakenVector << " seconds\n";
    timeOutput << "Time taken to load array: " << timeTakenArray << " seconds\n";

    cout << "Data has been processed and output files are created." << endl;

    return 0;
}
