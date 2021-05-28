#include <stdio.h>
#include <stdlib.h>

int *newArr(int n);

int main(void) {
    int *arr = newArr(2);

    printf("arr %p: %p\n", (void *)(&arr), (void *)arr);
    printf(" |- %p: %d\n", (void *)(&arr[0]), (arr[0]));
    printf(" +- %p: %d\n", (void *)(&arr[1]), (arr[1]));

    return 0;
}

int *newArr(int n) {
    int arr[n];

    return arr;
}
