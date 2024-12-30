#include <iostream>

using namespace std;
// link list
struct Node{
    int value;
    Node* next;
};
class LinkList{
    Node* head;
    public:
        LinkList(){
            head=NULL;
        }
        LinkList(Node node){
            head = &node;
        }
        void insertAtHead(int value){
            Node* newNode = new Node();
            newNode->value = value;
            newNode->next = head;
            
            head = newNode;
        }
        void insertAtEnd(int value){
            Node* newNode = new Node();
            newNode->value = value;
            newNode->next = NULL;
            
            if (!head){
                head = newNode;
            }
            else{
                Node* temp = head;
                while(temp->next){
                    temp = temp->next;
                }
                temp->next = newNode;
            }
        }
        void display(){
            if (!head){
                cout << "List is empty";
                return;
            }
            Node* temp = head;
            while(temp){
                cout << temp->value << endl;
                temp = temp->next;
            }
        }
        bool deleteFromStart(){
            delete head;
            head = head->next;
            if (!head){
                cout << "Empty";
                return false;
            }
        }
        void insertAtIndex(int value, int index){
            if (index<0){
                return;
            }
            if(index == 0){
                insertAtHead(value);
            }
            Node* newNode = new Node();
            newNode->value = value;

            Node* temp = head;
            int i = 1;
            while(temp != NULL){
                if (i == index){
                    newNode->next = temp->next;
                    temp->next = newNode;
                    break;
                }
                else{
                    i++;
                    temp = temp->next;
                }
            }
        }
        void DeleteFromIndex(int index){
            int i = 0;
            Node* temp = head;
            while(temp != NULL){
                if (i == index-1){
                    Node* del = temp->next;
                    temp->next = temp->next->next;
                    delete del;
                    break;
                }
                else{
                    temp = temp->next;
                    i++;
                }
            }
        }
};

int main(){
    LinkList l = LinkList();
    l.insertAtHead(1);
    l.insertAtHead(2);
    l.insertAtHead(3);
    l.insertAtEnd(4);
    // l.deleteFromStart();
    // l.insertAtIndex(5,2);
    l.DeleteFromIndex(1);
    l.display();
    
    return 1;
}