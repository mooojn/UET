#include <iostream>

using namespace std;
// link list
class Node {
public:
    int data;
    Node* next;
    Node(int new_data) {
        data = new_data;
        next = NULL;
    }
};
class Queue{
    Node *front, *rear;
    public: 
        Queue(){
            front = rear = NULL; 
        }
        void enqueue(int value){
            Node* node = new Node(value);
            if (front == NULL){
                front = rear = node;
                return;
            }
            rear->next = node;
            rear = node;
        }
        int dequeue(){
            Node* del = new Node(-1);
            del = front;
            int val = front->data;
            front = front->next;
            delete del;
            return val;
        }
        void display(){
            Node* current = front;
            while(current!=rear->next){
                cout << current->data << endl;
                current = current->next;
            }
        }

};

int main(){

    Queue s = Queue();

    s.enqueue(1);
    s.enqueue(2);
    s.enqueue(3);
    s.dequeue();

    
    s.display();
    return 1;
}