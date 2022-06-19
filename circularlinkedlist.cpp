#include<iostream>
using namespace std;

class Node{
    public:
       int data;
       Node* next;
};

class CircularList{
    private:
       int length;   
    void addlength(){
        length++;
    }

    public:
    CircularList(){
        length = 0;
    }

    void insertLast(Node** head, int value){
        Node* newNode = new Node();
        newNode->data = value; 
        if (*head == NULL){
            newNode->next = newNode;
            *head = newNode;    
        }
        else{
            Node* temp = *head;
            while(temp->next != *head){
                temp = temp->next;
            }
            temp->next = newNode;
            newNode->next = *head;
        }
        addlength();
    }

    void insertFirst(Node** head, int value){
        Node* newNode = new Node();
        newNode->data = value;
        if (*head == NULL){
            *head = newNode;
            newNode->next = newNode;
        }
        else{
            newNode->next = *head;
            Node* temp = *head;
            while(temp->next != *head){
                temp = temp->next;
            }
            temp->next = newNode;
            *head = newNode;
        }
        addlength();
    }

    void display(Node* head){
        Node* first = head;
        Node* itr = head;
        cout << "\n" <<first->data << "  ";
        while(itr->next != first){
            itr = itr->next;
            cout << itr->data << "  ";
        }
        cout<< "\nlength of circular linked list is " << length; 
    }

    void remove(Node** head, int value){
        if (*head != NULL){
            Node* temp = *head;
            while(temp->next != *head){
                cout << "\nChecking for value = " << temp->next->data;
                if(temp->next->data == value){
                    Node* temp1 = temp->next;
                    temp->next = temp->next->next;
                    if (temp1 == *head){
                        *head = temp1->next;
                    }
                    delete temp1;
                }
                else{
                    temp = temp->next;
                }
            }
            cout << "\nChecking for value = " << temp->next->data;
                if(temp->next->data == value){
                    Node* temp1 = temp->next;
                    temp->next = temp->next->next;
                    if (temp1 == *head){
                        *head = temp1->next;
                    }
                    delete temp1;
                }
        }
        else{
            cout <<"Empty list";
        }
    }
};

int main(){
    Node* head = NULL;
    CircularList c1;
    cout<< "start";
    c1.insertLast(&head, 1);
    c1.insertLast(&head, 4);
    c1.insertLast(&head, 5);
    c1.insertFirst(&head, 6);
    c1.insertFirst(&head, 7);
    c1.display(head);
    cout << "\n\n\n";
    c1.remove(&head, 7);
    c1.display(head);
    return 0;   
}