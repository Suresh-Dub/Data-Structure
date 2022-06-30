#include<stdio.h>
void linear(int a[],int n)
{
    int num,i;
    printf("Enter the no. you want to search: ");
    scanf("%d",&num);
    for( i=0;i<n;i++)
    {
        if(a[i]==num)
        {
         printf("Number %d is present at index %d",num,i);
        break;
        }
    }
   
}
void main()
{
    int m;
    printf("Enter the no. of elements: ");
    scanf("%d", &m);
    int a[m];
    printf("Enter you elements: ");
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &a[i]);
    }
    linear(a, m);
    return;
}