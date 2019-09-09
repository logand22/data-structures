#include <stdlib.h>
#include "linkedlist.h"

// Make sure to free
struct IntLinkedList* newIntLinkedList(int value) {
	struct IntLinkedList* returnee = (struct IntLinkedList*)malloc(sizeof(struct IntLinkedList));
	returnee->value = value;
	return returnee;
}
