#include <stdio.h>

/* To declare a function that takes an array as an argument: 
 * NOTE: "int a2[]" and "int *a2" are equivalent and interchangeable. */
void foo(int a2[]) {
    /* To modify an array passed as an argument -- this modifies the caller's
     * array: */
    a2[0] = 5;
}

int main(void) {
    int a1[2];

    /* To call a function that takes an array as an argument:
     * NOTE: An array *is* an address; there is no need for the "&" operator. */
    foo(a1);

    printf("a1[0]: %d\n", a1[0]);

    return 0;
}
