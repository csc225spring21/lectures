#include <stdio.h>

int main(void) {
    int x = 0, y = 0;

    x++;
    y = x + 1;

    printf("pt (%p):\n", (void *)&pt);
    printf(" |- x (%p): %d\n", (void *)&pt.x, pt.x);
    printf(" +- y (%p): %d\n", (void *)&pt.y, pt.y);

    return 0;
}
