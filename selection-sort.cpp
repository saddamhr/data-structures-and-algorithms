#include <stdio.h>

void selectionSort(int A[], int n) {

    int i, j, index_min, temp;

    for(i = 0; i < n - 1; i++) {
        index_min = i;
        for(j = i + 1; j < n; j++) {
            if(A[j] < A[index_min]) {
                index_min = j;
            }
        }
        if(index_min != i) {
            temp = A[i];
            A[i] = A[index_min];
            A[index_min] = temp;
        }
    }
}


void displayResult(int A[], int n) {

    for(int i = 0; i < n; i++) {
        printf("%d\n", A[i]);
    }
}

int main() {
    int i, arr[101], n;

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    selectionSort(arr, n);
    printf("Sorted array: \n");
    displayResult(arr, n);
}
