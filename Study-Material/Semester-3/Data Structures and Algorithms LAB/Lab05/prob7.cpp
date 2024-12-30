#include <iostream>
#include <stdexcept>
using namespace std;
template <typename T>
class Vector {
public:
    Vector() : size(0), capacity(1) {
        arr = new T[capacity];
    }
    ~Vector() {
        delete[] arr;
    }
    void PushBack(T value) {
        if (size == capacity) 
            resize(); 
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
    friend ostream& operator<<(ostream& out, const Vector& other) {
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
    void resize() {
        capacity *= 2; 
        T* newArr = new T[capacity];
        for (int i = 0; i < size; ++i) 
            newArr[i] = arr[i]; 
        delete[] arr; 
        arr = newArr;  
    }
};
int main() {
    Vector<int> vec;

    vec.PushBack(10);
    vec.PushBack(20);
    vec.PushBack(30);

    cout << "Vector: " << vec << endl;

    cout << "Element at index 1: " << vec[1] << endl;

    vec[1] = 25;  
    cout << "Vector after modification: " << vec << endl;

    return 0;
}
