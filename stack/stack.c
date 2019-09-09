#include <stdio.h>
#include <stdlib.h>

#include "../linkedlist/linkedlist.h"
#include "stack.h"

// New stack helper function
struct IntStack newIS(void) {
	struct IntStack myStack;
	myStack.head = NULL;
	myStack.size = 0;
	return myStack;
}

// retrieve top value on the stack
int topIS(struct IntStack* stack, int* value) {
	if(stack->size == 0)
		return -1;
	(*value) = stack->head->value;
	return 0;
}

// Push value onto stack
int pushIS(struct IntStack* stack, int value) {
	if(stack == NULL) 
		return -1;

	struct IntLinkedList* newNode = newIntLinkedList(value);

	newNode->next = stack->head;
	stack->head = newNode;

	stack->size++;

	return 0;
}

// Stack pop value on top
int popIS(struct IntStack* stack, int* popValue) {
	if(stack == NULL)
		return -1;

	if(stack->size == 0)
		return -1;

	struct IntLinkedList* newHead = stack->head->next;

	if(popValue != NULL)
		(*popValue) = stack->head->value;	

	free(stack->head);
	stack->head = newHead;
	stack->size--;

	return 0;
}
