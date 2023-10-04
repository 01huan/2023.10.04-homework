#include <stdio.h>
#include <stdlib.h>
int compute(int num) {
    int i;
    for (i=2; i<num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int num;
    scanf("%d", &num);
    if (compute(num)) {
        printf("%d is a prime number\n", num);
    } else {
        printf("%d is not a prime number\n", num);
    }
}