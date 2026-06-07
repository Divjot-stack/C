#include <stdio.h>

int main() {
    int num, reverse;

    printf("Enter a five-digit number: ");
    scanf("%d", &num);

    reverse = (num % 10) * 10000 +
              ((num / 10) % 10) * 1000 +
              ((num / 100) % 10) * 100 +
              ((num / 1000) % 10) * 10 +
              ((num / 10000) % 10);

    printf("Reversed number = %d\n", reverse);

    return 0;
}