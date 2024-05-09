#include <stdio.h>
int factorial(int n) {
    if (n == 0 || n == 1) 
        return 1;
    else 
        return n * factorial(n - 1);
}
int isStrong(int num) {
    int originalNum = num;
    int sum = 0;

    while (num > 0) {
        int digit = num % 10;
        sum += factorial(digit);
        num /= 10;
    }

    return (sum == originalNum);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isStrong(num))
        printf("%d is a strong number.\n", num);
    else
        printf("%d is not a strong number.\n", num);

    return 0;
}
