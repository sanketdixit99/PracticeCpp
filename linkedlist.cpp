#include <iostream>
using namespace std;

struct Node{
    int data;
    struct Node* prev;
    struct Node* next;
};
void pushFirst(Node** head, int value)
{
        if(head == NULL)
        {
            Node* newNode = new Node;
            newNode->data = value;
            *head = newNode;
        }
        else {
            Node* newNode = new Node;
            newNode->data = value;
            newNode->next = *head;
            *head->prev = newNode;
            *head = newNode;
        }
}

void Last(Node* head, int value){
    while (head->data != value){
        head = head->next;
    }
    Node* newNode = new Node;
    newNode->data = value;
    newNode->prev = head;
    newNode->next = head->next;
    head->next = newNode;
    
}


int main(){
    Node* newNode = pushFirst(NULL, 5);
    cout << newNode->data ;
}

