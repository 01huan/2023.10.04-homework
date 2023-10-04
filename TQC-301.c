#include <stdio.h>
#include <stdlib.h>
char compute(int row) {
    int i;
    for (i=0; i<row; i++) {
        printf("*");
    }
    printf("\n");
}
int main() {
    int s[2], i;
    for (i=0; i<2; i++) {
        scanf("%d", &s[i]);
    }
    for (i=0; i<s[1]; i++) {
        compute(s[0]);
    }
}