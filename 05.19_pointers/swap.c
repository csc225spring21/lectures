#include <stdio.h>

void swap(int *, int *);

int main(void) {
    int z = 1, w = 2;

    /* To call a function that takes two integer pointers: */
    swap(&z, &w);

    printf("z: %d, w: %d\n", z, w);
}

/* To declare a function that takes two integer pointers: */
void swap(int *x, int *y) {
    /* To use pointers to modify another functions' locals: */
    int temp = *x;
    *x = *y;
    *y = temp;
}
