#include <stdio.h>

int MAX_VALUE = 10;

int main() {
    printf("Begin\n");
    int sum = 0;

    for (int i = 0; i < MAX_VALUE; i++) {
        printf("i: %d\n", i);
        sum += i;
    }

    printf("sum: %d", sum);
    printf("\nThe end\n");
}