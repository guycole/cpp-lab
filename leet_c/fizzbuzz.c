#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char** fizzBuzz(size_t n, size_t* returnSize) {
    char **results = malloc(n * sizeof(char*));

    char buffer[32];

    for (size_t ndx = 1; ndx <= n; ndx++) {
        //printf("-x->%zu\n", ndx);
        if ((ndx % 3 == 0) && (ndx % 5 == 0)) {
            results[ndx-1] = strdup("FizzBuzz");
        } else if (ndx % 5 == 0) {
            results[ndx-1] = strdup("Buzz");
        } else if (ndx % 3 == 0) {
            results[ndx-1] = strdup("Fizz");
        } else {
            sprintf(buffer, "%ld", ndx);
            results[ndx-1] = strdup(buffer);
        }
    }

    *returnSize = n;

    return results;
}

int main() {
    size_t n = 15;
    size_t returnSize;

    char **results = fizzBuzz(n, &returnSize);

    //printf("%zu\n", returnSize);
    
    for (size_t ndx = 0; ndx < n; ndx++) {
        printf("%s\n", results[ndx]);
    }
    
    return EXIT_SUCCESS;
}