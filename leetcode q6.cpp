#include <stdio.h>
int removeDuplicates(int *arr, int n) {
    if (n == 0) return 0;
     int k = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[k - 1]) {
            arr[k] = arr[i];
            k++;
        }
    }
    return k;
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
   int k = removeDuplicates(arr, n);
   printf("k = %d\nnums = [", k);
    for (int i = 0; i < n; i++) {
        if (i < k)
            printf("%d", arr[i]);
        else
            printf("_");

        if (i != n - 1) printf(", ");
    }
    printf("]\n");

    return 0;
}

