#include <stdlib.h>

int main(void) {
    /* NOTE: This is a 16-byte memory leak. */
    int *arr = (int *)malloc(sizeof(int) * 4);

    return 0;
}
