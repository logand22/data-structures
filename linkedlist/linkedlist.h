#ifndef __LINKED_LIST__
#define __LINKED_LIST__

struct IntLinkedList {
	struct IntLinkedList* next;
	int value;
};

// Returns pointer to new node
struct IntLinkedList* newIntLinkedList(int value); 	

struct StringLinkedList {
	struct StringLinkedList* next;
	char* value;
};

#endif
