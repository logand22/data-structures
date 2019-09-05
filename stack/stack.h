#ifndef __STACK__
#define __STACK__

#include "../linkedlist/linkedlist.h"

struct IntStack {
	struct IntLinkedList* head;
	int size;
};

int top(struct IntStack* stack, int* topValue);
int push(struct IntStack* stack, int value);

#endif
