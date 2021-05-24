#include <stdio.h>

int* foo() {
    int a2[2] = {94, 327};

    /* NOTE: This returns a pointer to a local variable that is about to be
     *       deallocated -- we should *never* do this. */
    return a2;
}

int main(void) {
    int *a1;

    /* NOTE: This points "a1" at a memory location that is going to be
     *       overwritten as soon as we call another function. */
    a1 = foo();

    printf("a1[0]: %d\n", a1[0]);
    printf("a1[0]: %d\n", a1[0]);

    return 0;
}
