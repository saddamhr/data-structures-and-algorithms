#include <stdio.h>

int linear_search(int A[], int n, int x) {

        int i;
        for(i = 0; i < n; i++) {
            if(A[i] == x) {
                return i;
            }
        }
        i = -1;
        return -1;
    }

int main() {

    int arr[] = {60, 1, 88, 10, 11, 100};
    int index = linear_search(arr, 6, 11);
    printf("%d\n", index);
}
