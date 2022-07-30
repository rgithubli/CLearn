#include <stdio.h>

void print_int_array(int *arr, int length) {
    for (int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
}

int fib() {
    int fib[40];
    fib[0] = 0;
    fib[1] = 1;
    int n = 2;
    int val;
    while (n < (sizeof(fib) / sizeof(fib[0]) )) {
        fib[n] = fib[n - 1] + fib[n - 2];
        n++;
    }

    print_int_array(fib, 40);
    printf("hi");
//    printf()
}