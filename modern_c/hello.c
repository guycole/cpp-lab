// clang -o hello -Wall hello.c
// gcc -o hello -Wall hello.c

#include <stdio.h>
#include <stdlib.h>
// int main(void) is new
int main(void) {
//int main(int argc, char *argv[]) {
    printf("hello world\n");
    return EXIT_SUCCESS;
}