#include <stdio.h>

int main() {

    int i, n, even[101];

    for (i = 0; i < 101; i++) {
        even[i] = 0;
    }

    for (i = 0; i < 101; i+=2) {
        even[i] = 1;
        //printf("%d\n", even[i]);
    }

    scanf("%d", &n);

    if(even[n]) {
        printf("%d is even number.\n", n);
    } else {
        printf("%d is odd number.\n", n);
    }

}
