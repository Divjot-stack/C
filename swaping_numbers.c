#include <stdio.h>

int main() {
    int C, D, temp;

    printf("Enter two numbers: ");
    scanf("%d %d", &C, &D);

    temp = C;
    C = D;
    D = temp;

    printf("After interchange:\n");
    printf("C = %d\n", C);
    printf("D = %d\n", D);

    return 0;
}
