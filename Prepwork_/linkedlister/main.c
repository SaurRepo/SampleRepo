#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int a;
    struct node *next;
} node;

void newnode_end(node *head, int data){

    node *ptr, *newnode = malloc(sizeof(node));
    ptr=head;// directly head can also be used as the head we are traversing using the address only.
   // node *ptr = head;
    if(newnode == NULL)
        return;
    newnode->a= data;
    newnode->next =NULL;
    while (ptr->next != NULL){
        ptr = ptr->next;
    }
    ptr->next = newnode;
}

void traverse(node *head){
    while(head !=NULL){
        printf("%d\n",head->a);
        head = head->next;
    }
}
int main()
{
    node *head;

    head=malloc(sizeof(node));
    head->a = 20;
    head->next = NULL;
    newnode_end(head, 30);
    newnode_end(head, 40);
    newnode_end(head, 50);
    traverse(head);
    /*
    node *newnode = (node*)malloc(sizeof(node));
    if (newnode == NULL)
        return;
    //(*newnode).a=19;
    newnode->a= 10;
    newnode->next = NULL;

    newnode = malloc(sizeof(node));
    if (newnode == NULL)
        return;
    newnode->a = 12;
    newnode->next = NULL;
    newnode->next = newnode2;

    while()
*/
}
