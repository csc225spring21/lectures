int* foo() {
    int a2[2];
    return a2;
}

int main(void) {
    int *a1;
    a1 = foo();

    return 0;
}
