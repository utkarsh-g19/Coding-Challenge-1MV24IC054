#include <stdio.h>

int main() {
    int n;
    printf("Enter how many Fibonacci numbers to print: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive number.\n");
    } else {
        int a = 0, b = 1;

        printf("Fibonacci Sequence:\n");

        for (int i = 0; i < n; i++) {
            printf("%d\n", a);
            int next = a + b;
            a = b;
            b = next;
        }
    }

    return 0;
}
