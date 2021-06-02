#include <stdio.h>

int main(void) {
    int *ptr = NULL;

    /* NOTE: This will almost certainly result in a segfault. */
    return *ptr;
}
