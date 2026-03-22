#include <stddef.h>

void no_odds(size_t a, const int array[a], int *filtered, size_t *f) {
    size_t count = 0;

    for (size_t i = 0; i < a; i++) {
        if (array[i] % 2 == 0) { 
            filtered[count++] = array[i];
        }
    }

    *f = count;  // set the length of filtered array
}
