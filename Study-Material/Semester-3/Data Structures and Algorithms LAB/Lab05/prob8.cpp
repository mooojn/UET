#include <iostream>
#include <cmath> 
#include <stdexcept>
using namespace std;
template <typename T>
class ArrayList {
public:
    ArrayList() : size(0), capacity(2) {
        arr = new T[capacity];
    }
    ~ArrayList() {
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
    friend ostream& operator<<(ostream& out, const ArrayList& other) {
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
        capacity = static_cast<int>(ceil(capacity * 1.5));
        T* newArr = new T[capacity];
        for (int i = 0; i < size; ++i) 
            newArr[i] = arr[i]; 
        delete[] arr; 
        arr = newArr;  
    }
};
int main() {
    ArrayList<int> list;
  
    list.PushBack(10);
    list.PushBack(20);
    list.PushBack(30);
    list.PushBack(40);

    cout << "ArrayList: " << list << endl;
    cout << "Element at index 2: " << list[2] << endl;

    list[2] = 35;  
    cout << "ArrayList after modification: " << list << endl;

    return 0;
}
