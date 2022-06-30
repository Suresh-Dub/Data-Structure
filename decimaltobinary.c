#include <stdio.h>
void binary(int);
void main()
{
    int num;
    printf("enter your decimal number: ");
    scanf("%d", &num);
    binary(num);
}
void binary(int x)
{
    int rem, n, num[10];
    int i = 0, j;
    while (x)
    {
        rem = x % 2;
        num[i] = rem;
        x = x / 2;
        i++;
    }
    printf("\nBinary number: ");
    for (j = i - 1; j >= 0; j--)
        printf("%d", num[j]);
    return;
}
