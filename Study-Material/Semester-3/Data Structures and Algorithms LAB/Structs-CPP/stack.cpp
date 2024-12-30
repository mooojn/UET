#include <iostream>

using namespace std;
// link list
class Node {
public:
    int data;
    Node* next;
    Node(int new_data) {
        data = new_data;
        next = nullptr;
    }
};
class Stack{
    Node* head;
    public: 
        Stack(){
            head = nullptr;
        }
        int pop(){
            int val = head->data;
            head = head->next;
            return val;
        }
        void push(int value){
            Node* newNode = new Node(value);

            newNode->next = head;
            head = newNode;
        }
        void display(){
            Node* current = head;
            while (current!=NULL){
                cout << current->data << endl;
                current = current->next;
            }
        }

};

int main(){

    Stack s = Stack();

    s.push(1);
    s.push(2);
    s.push(3);
    cout<<"poped: "<<s.pop()<<endl;
    cout<<"pooped"<<endl;

    s.display();
    
    return 1;
}