#include "../linkedlist/linkedlist.h"
#include "queue.h"

#include <stdlib.h>
#include <stdio.h>

struct IntQueue newIntQueue(void) {
    struct IntQueue temp = {NULL, 0};
    return temp;
}

int dequeueIQ(struct IntQueue* queue, int* dValue) {
    if(queue == NULL) 
        return -1;

    if(queue->size == 0)
        return -1;

    if(dValue != NULL)
        (*dValue) = queue->next->value;

    queue->next = queue->next->next;
    queue->size--;

    return 0;
}


int enqueueIQ(struct IntQueue* queue, int value) {
    if(queue == NULL) 
        return -1;

    if(queue->size == 0)
        queue->next = newIntLinkedList(value);
        queue->size++;
        return 0;

    struct IntLinkedList* temp = queue->next;

    while(temp->next != NULL) {
        temp = temp->next;
    }

    temp = newIntLinkedList(value);

    queue->size++;

    return 0;
} 
