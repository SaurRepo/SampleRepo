#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int data;
    struct node *next;
}Node;

void addlast (int data, Node *head){
    Node *flow = head, *new = malloc(sizeof(Node));
    new->data = data;
    new->next = NULL;

    while(flow->next != NULL){
          flow = flow->next;
    }
    flow->next = new;
}

Node* addbeginning( int data, Node *head){
    Node *flow = head, *new = malloc(sizeof(Node));
    new->data = data;
    new->next = head;
    return new;
}

traverse (Node *head){
    while (head !=NULL){
        printf("%d\n", head->data);
        head = head->next;
    }
}


int main()
{
    Node *new = malloc(sizeof(Node));
    new->data = 20;
    new->next = NULL;

    addlast(30, new);
    new = addbeginning (40, new);
    traverse(new);
    return 0;
}
