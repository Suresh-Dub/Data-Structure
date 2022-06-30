#include <stdio.h>
#include <math.h>
void binary(int);
void main()
{
    int num;
    printf("Enter your binary number: ");
    scanf("%d", &num);
    binary(num);
}
void binary(int num)
{
    int temp, sum = 0, count = 0;
    while (num)
    {
        temp = num % 10;
        if (temp == 1)
            sum = pow(2, count) + sum;
        count++;
        num = num / 10;
    }
    printf("Decimal number is: %d", sum);
}