#include <stdio.h>
#include "stack.h"
#include "../linkedlist/linkedlist.h"

int main(void) {
	struct IntStack myStack = newIS();

	pushIS(&myStack, 5);
	pushIS(&myStack, 7);

	int popValue;
	popIS(&myStack, &popValue);
	popIS(&myStack, NULL);

	pushIS(&myStack, 20);


	int value;
	topIS(&myStack, &value);
	printf("%d\n", value);

	printf("%d\n", myStack.size);
}
