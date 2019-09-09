#ifndef __STACK__
#define __STACK__

#include "../linkedlist/linkedlist.h"

struct IntStack {
	struct IntLinkedList* head;
	int size;
};

/*
 * Create a new Int Stack 
 */
struct IntStack newIS(void);

/*
 * Returns the top value on the stack and stores it into topValue
 * Returns -1 on error.
 */
int topIS(struct IntStack* stack, int* topValue);

/*
 * Push value on to the stack. Returns -1 on error. 
 */
int pushIS(struct IntStack* stack, int value);

/*
 * Pop value on top of stack. Returns -1 on error.
 */
int popIS(struct IntStack* stack, int* popValue);

#endif
