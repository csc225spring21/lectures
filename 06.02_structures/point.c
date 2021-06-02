#include <stdio.h>
#include "point.h"

int main(void) {
    /* To declare and initialize a variable of type "struct point": */
    struct point pt = {0, 0};

    /* To mutate the members of a structure: */
    pt.x++;
    pt.y = pt.x + 1;

    printf("pt (%p):\n", (void *)&pt);
    printf(" |- x (%p): %d\n", (void *)&pt.x, pt.x);
    printf(" +- y (%p): %d\n", (void *)&pt.y, pt.y);

    return 0;
}
