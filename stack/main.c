#include <stdio.h>
#include "stack.h"
#include "../linkedlist/linkedlist.h"

int main(void) {
	struct IntStack myStack;
	myStack.head = NULL;
	myStack.size = 0;

	push(&myStack, 5);

	int value;
	top(&myStack, &value);
	printf("%d\n", value);
}
