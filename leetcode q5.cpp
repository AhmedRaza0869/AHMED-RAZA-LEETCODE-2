#include <stdio.h>
void reverseString(char *string, int Size);
int main() {
    int n;
    printf("Enter size of string: ");
    scanf("%d", &n);
    char string[n];
    printf("Enter characters:\n");
    for (int i = 0; i < n; i++) {
        scanf(" %c", &string[i]);   
    }
reverseString(string, n);
printf("Reversed string: [");
    for (int i = 0; i < n; i++) {
        printf("\"%c\"", string[i]);
        if (i != n - 1) printf(", ");
    }
    printf("]\n");

    return 0;
}

void reverseString(char* string, int Size) {
    int left = 0, right = Size - 1;

    while (left < right) {
        char temp = string[left];
        string[left] = string[right];
        string[right] = temp;

        left++;
        right--;
    }
}

