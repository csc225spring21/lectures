#include <stdio.h>
#include "add.h"

int main(void) {
    /* NOTE: This is not allowed; the compiler would see this as "1 = 4", which
     *       is nonsensical. "ONE" is a macro, not a variable.
     * ONE = 4; */

    /* Calls a function that takes two ints and returns an int: */
    printf("1 + 2 = %d\n", add(ONE, TWO));

    return 0;
}
