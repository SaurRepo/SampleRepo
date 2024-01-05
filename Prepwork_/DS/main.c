#include <stdio.h>
#include <stdlib.h>

typedef struct nodal{
    int data;
    struct nodal *next;
}nodal;

void reverse (nodal **head){
    nodal *prev = NULL;
    nodal *current = head;
    nodal *next = NULL;

    while (current != NULL){
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

}

int main()
{
    printf("Hello world!\n");
    return 0;
}
