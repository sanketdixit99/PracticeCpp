#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
};

class BST{
    private:
    int sizeoftree;

    void increasesize(){
        sizeoftree++;
    }

    public:

    BST(){
        sizeoftree = 0;
    }
    void addElement(Node** head, int value){
        Node* newNode = new Node();
        newNode->data = value;    
        if (*head == NULL){
            newNode->left = newNode->right = NULL;
            *head = newNode;
        }
        else if(*head != NULL && (*head)->data < value){
            addElement(&((*head)->right), value);
        }
        else{
            addElement(&((*head)->left), value);
        }
    }

    void display(Node* head){

    }
    void 
};

int main(){
    BST bst;
    Node* head = NULL;
    bst.addElement(&head, 5);
    bst.addElement(&head, 7);
    bst.addElement(&head,6);
    return 0;
}