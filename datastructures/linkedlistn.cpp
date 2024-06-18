#include <iostream>
#include <stdio.h>
using namespace std;

struct Node{
    int data;
    struct Node* next;
};

void InsertatN(Node** head, int x, int n){
    int counter = 1;
    Node* temp = new Node();
    Node* newelement = new Node();
    newelement->data = x;
    newelement->next = NULL;
    if(*head == NULL){
        newelement->data = x;
        newelement->next = NULL;
        *head = newelement;
        return;
    }
    temp = *head;
    if(n == 1){
        newelement->next = *head;
        *head = newelement;
        return;
    }
    do{
        if(counter+1 == n){
            newelement->next = temp->next;
            temp->next = newelement;
            return;
        };
        temp = temp->next;
        counter++;
        if(temp->next == NULL){
            printf("Cannot insert at invalid position");
            return;  
        }
    }while (temp != NULL);
}

void Print(Node** head){
    Node* temp = new Node();
    temp = *head;
    while(temp!=NULL){
        printf("%d", temp->data);
        temp = temp->next;
    }
    return;
}
int main(){
    struct Node* head = NULL;
    
    InsertatN(&head,5,1); //5
    InsertatN(&head,6,2); //5,6
    InsertatN(&head,3,1); //3,5,6
    InsertatN(&head,7,2); //3,7,5,6
    Print(&head);
    return 0;
}