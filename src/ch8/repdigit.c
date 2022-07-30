#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int Bool;

int repdigit() {
    Bool digit_seen[10] = {0};
    int digit;
    long int n;

    printf("Enter a number..");
    scanf("%ld", &n);

    while (n > 0) {
        digit = n % 10;
//        if (digit_seen[digit])
//            break;
        digit_seen[digit] = TRUE;
        n /= 10;
    }


    for (int i = 0; i < 10; i++) {

    }
    printf("Repeated digits:\n");

}
