#include <stdio.h>

int main(void) {
    int num1;
    int num2;

    puts("Please enter the first integer: ");
    scanf("%d", &num1);
    puts("Please enter the second integer: ");
    scanf("%d", &num2);
    if (num1 > num2) {
        printf("%d %s",num1, "is the maximum number.");
    }
    else {
        printf("%d %s",num2, "is the maximum number.");
    }

    return 0;
}