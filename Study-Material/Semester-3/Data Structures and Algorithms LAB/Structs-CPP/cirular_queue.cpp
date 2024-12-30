#include <iostream>
using namespace std;

class CircularQueue {
private:
    int *queue;
    int front, rear, size, capacity;

public:
    CircularQueue(int capacity) {
        this->capacity = capacity;
        queue = new int[capacity];
        front = -1;
        rear = -1;
        size = 0;
    }

    ~CircularQueue() {
        delete[] queue;
    }

    bool isFull() {
        return size == capacity;
    }

    bool isEmpty() {
        return size == 0;
    }

    void enqueue(int value) {
        if (isFull()) {
            cout << "Queue is full" << endl;
            return;
        }
        rear = (rear + 1) % capacity;
        queue[rear] = value;
        if (front == -1) {
            front = rear;
        }
        size++;
    }

    int dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        int value = queue[front];
        front = (front + 1) % capacity;
        size--;
        if (size == 0) {
            front = -1;
            rear = -1;
        }
        return value;
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return;
        }
        int i = front;
        while (true) {
            cout << queue[i] << " ";
            if (i == rear) break;
            i = (i + 1) % capacity;
        }
        cout << endl;
    }
};

int main() {
    CircularQueue q(5);

    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);

    q.display();

    q.dequeue();
    q.dequeue();

    q.display();

    q.enqueue(6);
    q.enqueue(7);

    q.display();

    return 0;
}