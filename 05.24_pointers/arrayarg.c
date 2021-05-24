void foo(int a2[]) {
    a2[0] = 5;
}

int main(void) {
    int a1[2];
    foo(a1);

    return 0;
}
