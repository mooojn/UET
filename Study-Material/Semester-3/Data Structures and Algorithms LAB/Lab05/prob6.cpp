#include <iostream>
using namespace std;
template <typename T>
class AutoGrowingArray {
public:
    AutoGrowingArray() : size(0), capacity(1) {
        arr = new T[capacity];
    }
    ~AutoGrowingArray() {
        delete[] arr;
    }
    void PushBack(T value) {
        if (size == capacity) 
            grow(); 
        arr[size] = value;
        ++size;
    }
    T operator[](int index) const {
        if (index < 0 || index >= size)
            throw out_of_range("Index out of bounds");
        return arr[index];
    }
    T& operator[](int index) {
        if (index < 0 || index >= size)
            throw out_of_range("Index out of bounds");
        return arr[index];
    }
    friend ostream& operator<<(ostream& out, const AutoGrowingArray& other) {
        out << "[";
        for (int i = 0; i < other.size; ++i) {
            out << other.arr[i];
            if (i != other.size - 1) 
                out << ", ";
        }
        out << "]";
        return out;
    }
private:
    T* arr;      
    int size;    
    int capacity; 
    void grow() {
        capacity += 1; 
        T* newArr = new T[capacity];
        for (int i = 0; i < size; ++i) 
            newArr[i] = arr[i]; 
        delete[] arr; 
        arr = newArr; 
    }
};
int main() {
    AutoGrowingArray<int> arr;

    arr.PushBack(10);
    arr.PushBack(20);
    arr.PushBack(30);

    cout << "Array: " << arr << endl;

    cout << "Element at index 1: " << arr[1] << endl;

    arr[1] = 25;  
    cout << "Array after modification: " << arr << endl;

    return 0;
}
