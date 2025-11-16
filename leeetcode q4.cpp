#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("ELEMENT %d:",i+1);
        scanf("%d",&arr[i]);
    }
    int index=0;
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[index] = arr[i];
            index++;
        }
    }
    while (index < n) {
        arr[index] = 0;
        index++;
    }
     printf("\nOutput: [");
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i != n - 1) printf(", ");
    }
    printf("]\n");
    return 0;
}
