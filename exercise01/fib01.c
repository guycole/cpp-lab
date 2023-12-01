#include <stdio.h>

#define TARGET 6

int fib(int arg) {
    if (arg < 2) {
        return arg;
    }

    return fib(arg-2) + fib(arg-1);
}

int main(int argc, char *argv[]) {
    int result = fib(TARGET);
    printf("result:%d\n", result);
    return(0);
}