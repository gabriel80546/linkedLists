#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct linkedList {
    int dados;
    struct linkedList *next;
} linkedList_t;

void print_list(linkedList_t * head) {
    linkedList_t *current = head;

    while (current != NULL) {
        printf("current->dados = %d\n", current->dados);
        current = current->next;
    }
}


int main() {
    linkedList_t *head = NULL;
    head = (linkedList_t *)malloc(sizeof(linkedList_t));
    if (head == NULL) {
        return 1;
    }
    head->dados = 1;
    head->next = (linkedList_t *) malloc(sizeof(linkedList_t));
    head->next->dados = 2;
    head->next->next = NULL;

    printf("Hello World!\n");
    pri
    free(head->next);
    free(head);
    return 0;
}