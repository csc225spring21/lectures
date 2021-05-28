#include <stdio.h>
#include <stdlib.h>

int *newArr(int n);

int main(void) {
    int *arr = newArr(2);

    printf("arr %p: %p\n", (void *)(&arr), (void *)arr);
    printf(" |- %p: %d\n", (void *)(&arr[0]), (arr[0]));
    printf(" +- %p: %d\n", (void *)(&arr[1]), (arr[1]));

    /* To deallocate memory that was dynamically allocated on the heap: */
    free(arr);

    return 0;
}

int *newArr(int n) {
    /* To dynamically allocate space for n integers on the heap: */
    int *arr = (int *)malloc(sizeof(int) * n);

    return arr;
}
