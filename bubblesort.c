#include<stdio.h>
void bubble(int a[],int n)
{
    int swap,i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                swap=a[j];
                a[j]=a[j+1];
                a[j+1]=swap;
            }
        }
    }
}
    void main()
{
    int n;
    printf("Enter no. of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Unsorted array: ");
     for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    bubble(arr, n);
    printf("\n  Sorted array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}