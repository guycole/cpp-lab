#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int two_sum(const int* candidates, int candidate_size, int target, int* results) {
    for (size_t ndx1 = 0; ndx1 < candidate_size; ndx1++) {
        for (size_t ndx2 = ndx1 + 1; ndx2 < candidate_size; ndx2++) {
            if (candidates[ndx1] + candidates[ndx2] == target) {
                results[0] = ndx1;
                results[1] = ndx2;

                return EXIT_SUCCESS;
            }
        }
    }

    return EXIT_FAILURE;
}

int main() {
    int candidates[] = {2, 7, 11, 15};
    int candidate_size = 4;
    int target = 22;
    int results[2];

    int retflag = two_sum(candidates, candidate_size, target, results);

    if (retflag == EXIT_SUCCESS) {
        printf("Success\n");

        for (size_t ndx = 0; ndx < 2; ndx++) {
            printf("%d\n", results[ndx]);
        }
    } else {
        printf("Failure\n");
    }
   
    return EXIT_SUCCESS;
}