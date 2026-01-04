#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *prev, *next;
};

void insertFront(struct Node **head, int data){
    struct Node *n = malloc(sizeof(struct Node));
    n->data=data; n->prev=NULL; n->next=*head;
    if(*head) (*head)->prev=n;
    *head=n;
}

void deleteFront(struct Node **head){
    if(!*head) return;
    struct Node *temp=*head;
    *head=(*head)->next;
    if(*head) (*head)->prev=NULL;
    free(temp);
}

void display(struct Node *head){
    while(head){
        printf("%d ",head->data);
        head=head->next;
    }
}

int main(){
    struct Node *head=NULL;
    insertFront(&head,10);
    insertFront(&head,20);
    deleteFront(&head);
    display(head);
    return 0;
}
