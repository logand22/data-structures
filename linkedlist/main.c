#include <stdio.h>
#include "linkedlist.h"

int main(void) {
	struct IntLinkedList a;
	struct IntLinkedList b;

	a.next = &b;
	a.value = 6;

	b.value = 7;
	b.next = NULL;

	printf("b.value is %d\n", a.next->value);

	char* message1 = "Nice";
	char* message2 = "Sweet";

	struct StringLinkedList x;
	struct StringLinkedList y;

	x.next = &y;
	x.value = message1;

	y.next = NULL;
	y.value = message2;

	printf("y.value is %s\n", x.next->value);

	return 0;
}
