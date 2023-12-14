#include <stdio.h>
#include <math.h>

int main() {
    int lower, upper, num, sum, digit, temp;

    printf("Enter the lower and upper bounds: ");
    scanf("%d %d", &lower, &upper);

    printf("Armstrong numbers in the range %d to %d are:\n", lower, upper);

    num = lower;

    while (num <= upper) {
        sum = 0;
        temp = num;

        while (temp > 0) {
            digit = temp % 10;
            sum += pow(digit, 3);
            temp /= 10;
        }

        if (sum == num) {
            printf("%d\n", num);
        }

        num++;
    }

    return 0;
}
