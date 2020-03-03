#include <stdio.h>

void insertionSort(int arr[], int n) {

    int i, j, item;

    for(i = 1; i < n; i++) {
        item = arr[i];

        j = i - 1;
        while(j >= 0 && arr[j] > item) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = item;
    }
}

void displayResult(int A[], int n) {

    int i;

    for(i = 0; i < n; i++) {
        printf("%d\n", A[i]);
    }
}

int main() {
    int arr[101], n, i;

    scanf("%d",&n);

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    insertionSort(arr, n);
    printf("Sorted array: \n");
    displayResult(arr, n);
}
