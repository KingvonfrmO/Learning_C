#include "lists.h"

size_t print_dlistint(const dlistint_t *h) {
    unsigned int count = 0;
    while (h != NULL) {
        printf("%d\n", h -> n);
        count++;
        h = h -> next;
    }

    return count;
}