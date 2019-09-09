#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

int main(void) {

	struct IntLinkedList* node = newIntLinkedList(7);
	node->next = newIntLinkedList(8);

	printf("%d\n", node->next->value);

	free(node->next);
	free(node);

	return 0;
}
