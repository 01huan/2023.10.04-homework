#include <stdio.h>
#include <stdlib.h>
int compute(int a[]) {
    int i, amount = 0;
    for (i=0; i<6; i++) {
        if (a[i] % 3 == 0) {
            amount++;
        }
    }
    return amount;
}
int main () {
    int arr[6], i;
    for (i=0; i<6; i++) {
        scanf("%d", &arr[i]);
    }
    printf("%d\n", compute(arr));
}