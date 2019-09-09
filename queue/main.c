#include <stdio.h>
#include "queue.h"

int main() {

    struct IntQueue myQueue = newIntQueue();

    enqueueIQ(&myQueue, 5);
    enqueueIQ(&myQueue, 7);
    enqueueIQ(&myQueue, 990);

    int value; 
    dequeueIQ(&myQueue, &value);
    printf("%d\n", value);
    printf("Queue size is: %d\n", myQueue.size);
    return 0; 
}
