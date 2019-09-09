#ifndef __QUEUE__
#define __QUEUE__

// With SLL must choose whether enqueue or dequeue is O(1)
//

struct IntQueue {
    struct IntLinkedList* next;
    int size;
};

/*
 * Helper function to create new Queue
 */
struct IntQueue newIntQueue(void);

/*
 * Dequeue item from queue and store in dValue. Returns -1 on error
 */
int dequeueIQ(struct IntQueue* queue, int* dValue);

/*
 * Enqueue value onto queue. Returns -1 on error
 */ 
int enqueueIQ(struct IntQueue* queue, int value);

#endif
