#include <stdio.h>

#include "../linkedlist/linkedlist.h"
#include "stack.h"

int top(struct IntStack* stack, int* value) {
	if(stack->size == 0)
		return -1;
	(*value) = stack->head->value;
	return 0;
}

int push(struct IntStack* stack, int value) {
	if(stack->head == NULL) {
		struct IntLinkedList a;
		a.value = value;
		a.next = NULL;
		stack->head = &a;
	} else {
		struct IntLinkedList a;
		a.value = value;
		a.next = stack->head;
		stack->head = &a;
	}

	stack->size++;	

	return 0;
}
