#include <stdio.h>

void bubbleSort(int A[], int n) {

    int i, j, temp;

    for(i = 0; i < n-1; i++) {
        for(j = 0; j < n-i-1; j++) {
            if(A[j] > A[j+1]) {
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
    }
}



void outputArray(int A[], int n) {

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

    bubbleSort(arr, n);
    printf("Sorted array: \n");
    outputArray(arr, n);
}
