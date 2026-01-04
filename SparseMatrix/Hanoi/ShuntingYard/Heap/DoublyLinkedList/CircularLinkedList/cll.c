#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

void insert(struct Node **head, int data){
    struct Node *n=malloc(sizeof(struct Node));
    n->data=data;
    if(!*head){
        *head=n; n->next=n;
    } else {
        n->next=(*head)->next;
        (*head)->next=n;
    }
}

void display(struct Node *head){
    if(!head) return;
    struct Node *p=head;
    do{
        printf("%d ",p->data);
        p=p->next;
    } while(p!=head);
}

int main(){
    struct Node *head=NULL;
    insert(&head,1);
    insert(&head,2);
    display(head);
    return 0;
}
