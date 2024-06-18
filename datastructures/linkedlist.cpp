#include <stdio.h>
#include <iostream>
using namespace std;
struct Node{
    int data;
    struct Node* next;
};

//struct Node* head;

Node* InsertBeginning (Node* head, int x){
    Node* temp = (Node*)malloc(sizeof(Node));
    temp->data = x;
    temp->next = NULL;
    if(head!= NULL){
        temp->next = head;
    }
    head = temp;
    return head;
}

void PrintList(Node* head){
    // Node* temp = head;
    // while(temp!=NULL){
    //     printf("%d ",temp->data);
    //     temp = temp->next;
    // }
    // printf("\n");
    while(head!=NULL){
        printf("%d ",head->data);
        head = head->next;
    }
    printf("\n");
}

int main(){
    Node* head;
    head = NULL;
    // empty list
    printf("How many numbers");
    int n,x;
    scanf("%d", &n);
    for (int i=0; i<n; i++){
        printf("Enter the numbers");
        scanf("%d", &x);
        head = InsertBeginning(head,x);
        PrintList(head);
    }
}